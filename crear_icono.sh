#!/bin/bash

# Crear imagen con el emoji del compilador
python3 << 'PYEOF'
import subprocess
import os

# Crear un icono usando sips y el emoji
script = '''
tell application "Finder"
    set iconFile to POSIX file "/tmp/compilador_icon.png"
end tell
'''

# Generar icono con Python usando solo herramientas del sistema
import struct, zlib

def crear_png_simple(filename, color_bg, texto):
    """Crea un PNG simple de 512x512"""
    w, h = 512, 512
    
    # Crear imagen usando screencapture con HTML
    html = f'''<html><body style="margin:0;background:linear-gradient(135deg,#00e5ff,#7c4dff);width:512px;height:512px;display:flex;align-items:center;justify-content:center;border-radius:100px">
    <div style="font-size:200px;text-align:center">⌘</div>
    </body></html>'''
    
    with open('/tmp/icon.html', 'w') as f:
        f.write(html)

crear_png_simple('/tmp/icon.png', '#00e5ff', '⌘')
PYEOF

