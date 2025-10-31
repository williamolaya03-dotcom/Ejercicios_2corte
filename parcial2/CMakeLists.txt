cmake_minimum_required(VERSION 3.10)
project(DispositivoInteligente)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(DispositivoInteligente
    src/main.cpp
    src/DispositivoInteligente.cpp
)
