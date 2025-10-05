#!/bin/bash

echo "🔨 Compilando programa..."
if g++ -o programa -Wall -ansi -pedantic -O0 -g main.cpp cliente.cpp conta_bancaria.cpp; then
    echo "✅ Compilação bem-sucedida!"
    echo ""
    echo "🚀 Executando programa..."
    echo "========================================"
    ./programa
    echo "========================================"
    echo ""
    echo "🧹 Removendo arquivo executável..."
    rm -f programa
    echo "✅ Limpeza concluída!"
else
    echo "❌ Erro na compilação!"
    echo "Verifique os arquivos .cpp e .hpp"
fi
