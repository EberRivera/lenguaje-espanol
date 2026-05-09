#!/bin/bash
clear
echo "╔═══════════════════════════════════════╗"
echo "║     Compilador Lenguaje Español       ║"
echo "║     Iniciando servidor...             ║"
echo "╚═══════════════════════════════════════╝"
echo ""

cd "$(dirname "$0")"

# Compilar si no existe el ejecutable
if [ ! -f "./espanol" ]; then
    echo "Compilando proyecto..."
    make
fi

# Matar servidor previo
lsof -ti:8080 | xargs kill -9 2>/dev/null
sleep 0.5

# Iniciar servidor
python3 servidor.py &
SERVER_PID=$!

sleep 1
echo "Servidor activo en http://localhost:8080"
echo ""
open http://localhost:8080

echo "Presiona Ctrl+C para detener el servidor."
wait $SERVER_PID
