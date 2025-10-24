#include "../include/Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
    std::cout << "Libro agregado correctamente.\n";
}

void Biblioteca::eliminarLibro(const std::string& isbn) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->getISBN() == isbn) {
            libros.erase(it);
            std::cout << "Libro eliminado.\n";
            return;
        }
    }
    std::cout << "No se encontró un libro con ese ISBN.\n";
}

void Biblioteca::mostrarLibrosDisponibles() const {
    std::cout << "\n--- Libros disponibles ---\n";
    for (const auto& libro : libros) {
        if (libro.estaDisponible()) {
            libro.mostrarInfo();
        }
    }
}

void Biblioteca::buscarPorTitulo(const std::string& titulo) const {
    std::cout << "\nBuscando libros con título: " << titulo << "\n";
    for (const auto& libro : libros) {
        if (libro.getTitulo() == titulo) {
            libro.mostrarInfo();
            return;
        }
    }
    std::cout << "No se encontró ningún libro con ese título.\n";
}

void Biblioteca::buscarPorAutor(const std::string& autor) const {
    std::cout << "\nBuscando libros del autor: " << autor << "\n";
    for (const auto& libro : libros) {
        if (libro.getAutor() == autor) {
            libro.mostrarInfo();
        }
    }
}
