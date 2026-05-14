#!/usr/bin/env python3
import http.server
import subprocess
import json
import os
import tempfile
import re
import glob

class CompiladorHandler(http.server.BaseHTTPRequestHandler):
    def log_message(self, format, *args):
        pass

    def do_GET(self):
        # Lista de archivos .es
        if self.path == '/ejemplos':
            archivos = sorted([f for f in glob.glob('*.es') if os.path.isfile(f)])
            self.send_response(200)
            self.send_header('Content-type', 'application/json')
            self.send_header('Access-Control-Allow-Origin', '*')
            self.end_headers()
            self.wfile.write(json.dumps({'archivos': archivos}).encode())
            return

        # Servir archivo .es especifico
        if self.path.startswith('/archivo/'):
            nombre = self.path.replace('/archivo/', '')
            if os.path.exists(nombre) and nombre.endswith('.es'):
                self.send_response(200)
                self.send_header('Content-type', 'text/plain; charset=utf-8')
                self.end_headers()
                with open(nombre, 'rb') as f:
                    self.wfile.write(f.read())
            else:
                self.send_error(404)
            return

        # Pagina principal
        if self.path == '/' or self.path == '/index.html':
            self.send_response(200)
            self.send_header('Content-type', 'text/html; charset=utf-8')
            self.end_headers()
            with open('index.html', 'rb') as f:
                self.wfile.write(f.read())
            return

        # Archivos estaticos (logo, etc)
        filepath = self.path.lstrip('/')
        if os.path.exists(filepath) and os.path.isfile(filepath):
            self.send_response(200)
            if filepath.endswith('.jpeg') or filepath.endswith('.jpg'):
                self.send_header('Content-type', 'image/jpeg')
            elif filepath.endswith('.png'):
                self.send_header('Content-type', 'image/png')
            else:
                self.send_header('Content-type', 'application/octet-stream')
            self.end_headers()
            with open(filepath, 'rb') as f:
                self.wfile.write(f.read())
        else:
            self.send_error(404, 'File not found')

    def do_POST(self):
        length = int(self.headers['Content-Length'])
        body = self.rfile.read(length)
        data = json.loads(body)
        codigo = data.get('codigo', '')
        entradas = data.get('entradas', '')
        modo = data.get('modo', 'interpretar')

        tmp = tempfile.NamedTemporaryFile(suffix='.es', delete=False, mode='w')
        tmp.write(codigo)
        tmp.close()

        try:
            if modo == 'compilar':
                result = subprocess.run(
                    ['./espanol', tmp.name, '-c'],
                    capture_output=True, text=True, timeout=10,
                    cwd=os.path.dirname(os.path.abspath(__file__))
                )
                salida = result.stdout + result.stderr
                exe = tmp.name.replace('.es', '')
                if os.path.exists(exe):
                    result2 = subprocess.run(
                        [exe],
                        input=entradas,
                        capture_output=True, text=True, timeout=10
                    )
                    salida += '\n--- Salida del ejecutable ---\n'
                    salida += result2.stdout + result2.stderr
                    os.unlink(exe)
                    c_file = tmp.name.replace('.es', '.c')
                    if os.path.exists(c_file):
                        with open(c_file, 'r') as cf:
                            salida += '\n--- Codigo C generado ---\n'
                            salida += cf.read()
                        os.unlink(c_file)
            else:
                result = subprocess.run(
                    ['./espanol', tmp.name],
                    input=entradas,
                    capture_output=True, text=True, timeout=10,
                    cwd=os.path.dirname(os.path.abspath(__file__))
                )
                salida = result.stdout + result.stderr

        except subprocess.TimeoutExpired:
            salida = "Error: tiempo de ejecucion excedido"
        except Exception as e:
            salida = f"Error: {str(e)}"
        finally:
            os.unlink(tmp.name)

        salida = re.sub(r'\033\[[0-9;]*m', '', salida)
        
        # Detectar si faltan entradas
        num_ingresar = codigo.lower().count('ingresar(')
        num_entradas = len([e for e in entradas.split('\n') if e.strip()])
        if num_ingresar > 0 and num_entradas < num_ingresar:
            salida = f"⚠ Este programa tiene {num_ingresar} Ingresar() pero solo recibio {num_entradas} valor(es) en STDIN.\n\n" + salida

        self.send_response(200)
        self.send_header('Content-type', 'application/json')
        self.send_header('Access-Control-Allow-Origin', '*')
        self.end_headers()
        self.wfile.write(json.dumps({'salida': salida}).encode())

if __name__ == '__main__':
    port = 8080
    print(f"Compilador web corriendo en http://localhost:{port}")
    print("Presiona Ctrl+C para detener")
    server = http.server.HTTPServer(('localhost', port), CompiladorHandler)
    server.serve_forever()
