#!/bin/bash

# Ir a la carpeta donde está el script
cd "$(dirname "$0")"

# Verificar que existe el compilador
if [ ! -f "./espanol" ]; then
    echo "Compilando el proyecto..."
    make
fi

# Matar cualquier servidor previo en el puerto 8080
lsof -ti:8080 | xargs kill -9 2>/dev/null

# Iniciar el servidor en segundo plano
python3 servidor.py &
SERVER_PID=$!

# Esperar a que el servidor arranque
sleep 1

# Abrir el navegador
open http://localhost:8080

echo "Servidor corriendo. Cierra esta ventana para detenerlo."
echo "PID del servidor: $SERVER_PID"

# Esperar hasta que el usuario cierre la terminal
wait $SERVER_PID
