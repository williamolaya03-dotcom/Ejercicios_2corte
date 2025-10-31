cmake_minimum_required(VERSION 3.10)
project(TiendaOnline)

set(CMAKE_CXX_STANDARD 17)

# Incluir encabezados
include_directories(include)

# Crear ejecutable
add_executable(TiendaOnline
    src/main.cpp
    src/Producto.cpp
    src/ItemCarrito.cpp
    src/CarritoCompras.cpp
    src/Usuario.cpp
)
