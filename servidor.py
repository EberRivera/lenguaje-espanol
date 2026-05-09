#!/usr/bin/env python3
import http.server
import subprocess
import json
import os
import tempfile
import re

class CompiladorHandler(http.server.BaseHTTPRequestHandler):
    def log_message(self, format, *args):
        pass

    def do_GET(self):
        if self.path == '/' or self.path == '/index.html':
            self.send_response(200)
            self.send_header('Content-type', 'text/html; charset=utf-8')
            self.end_headers()
            with open('index.html', 'rb') as f:
                self.wfile.write(f.read())

    def do_POST(self):
        if self.path == '/compilar':
            length = int(self.headers['Content-Length'])
            body = self.rfile.read(length)
            data = json.loads(body)
            codigo = data.get('codigo', '')
            entradas = data.get('entradas', '')

            tmp = tempfile.NamedTemporaryFile(suffix='.es', delete=False, mode='w')
            tmp.write(codigo)
            tmp.close()

            try:
                result = subprocess.run(
                    ['./espanol', tmp.name],
                    input=entradas,
                    capture_output=True,
                    text=True,
                    timeout=10,
                    cwd=os.path.dirname(os.path.abspath(__file__))
                )
                salida = result.stdout + result.stderr
            except subprocess.TimeoutExpired:
                salida = "Error: tiempo de ejecucion excedido (ciclo infinito?)"
            except Exception as e:
                salida = f"Error: {str(e)}"
            finally:
                os.unlink(tmp.name)

            salida = re.sub(r'\033\[[0-9;]*m', '', salida)

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
