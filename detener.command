#!/bin/bash
echo "Deteniendo el compilador..."
lsof -ti:8080 | xargs kill -9 2>/dev/null
echo "Servidor detenido."
sleep 1
