#!/bin/bash

APP_NAME="Compilador Español"
APP_DIR="$HOME/Desktop/$APP_NAME.app"
SRC_DIR="$(pwd)"

mkdir -p "$APP_DIR/Contents/MacOS"
mkdir -p "$APP_DIR/Contents/Resources"

# Copiar todos los archivos necesarios
cp "$SRC_DIR/espanol" "$APP_DIR/Contents/MacOS/"
cp "$SRC_DIR/servidor.py" "$APP_DIR/Contents/MacOS/"
cp "$SRC_DIR/index.html" "$APP_DIR/Contents/MacOS/"

# Crear ejecutable principal
cat > "$APP_DIR/Contents/MacOS/Compilador" << APPEOF
#!/bin/bash
DIR="\$(cd "\$(dirname "\$0")" && pwd)"
cd "\$DIR"
lsof -ti:8080 | xargs kill -9 2>/dev/null
sleep 0.5
python3 "\$DIR/servidor.py" &
sleep 1
open http://localhost:8080
wait
APPEOF

chmod +x "$APP_DIR/Contents/MacOS/Compilador"
chmod +x "$APP_DIR/Contents/MacOS/espanol"

# Info.plist
cat > "$APP_DIR/Contents/Info.plist" << PLIST
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>CFBundleExecutable</key>
    <string>Compilador</string>
    <key>CFBundleName</key>
    <string>Compilador Español</string>
    <key>CFBundleIdentifier</key>
    <string>com.compilador.espanol</string>
    <key>CFBundleVersion</key>
    <string>1.0</string>
    <key>CFBundlePackageType</key>
    <string>APPL</string>
    <key>LSUIElement</key>
    <false/>
</dict>
</plist>
PLIST

echo "App creada en el Escritorio"
