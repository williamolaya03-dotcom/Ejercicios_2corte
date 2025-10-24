cmake_minimum_required(VERSION 3.10)
project(entrega3_2Cort)

set(CMAKE_CXX_STANDARD 17)

# Incluir encabezados (.h)
include_directories(include)

# --- Ejecutable 1: Sistema de Biblioteca ---
add_executable(Biblioteca
    scr/mainbiblioteca.cpp
    scr/Libro.cpp
    scr/Biblioteca.cpp
)

# --- Ejecutable 2: Sistema de Alquiler de Vehículos ---
add_executable(SistemaAlquiler
    scr/mainAlquiler.cpp
    scr/Vehiculo.cpp
    scr/Auto.cpp
    scr/Bicicleta.cpp
    scr/SistemaAlquiler.cpp
)
