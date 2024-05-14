#!/bin/bash

# Compilar acessórios
cd acessorios-cpp/
g++ -c *.cpp 
cd ..

# Compilar personagens
cd personagens-cpp/
g++ -c *.cpp 
cd ..

# Compilar core-simulador
cd core-simulador-cpp/
g++ -c *.cpp 
cd ..

# Compilar principal
cd principal/
g++ -c *.cpp 
cd ..

# Compilar o arquivo principal
g++ principal/*.o acessorios-cpp/*.o personagens-cpp/*.o core-simulador-cpp/*.o -o SaidaFinal
