#include "../include/Libro.h"
#include <iostream>

Libro::Libro(std::string titulo, std::string autor, std::string isbn, bool disponible)
    : titulo(titulo), autor(autor), isbn(isbn), disponible(disponible) {}

std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
std::string Libro::getISBN() const { return isbn; }
bool Libro::estaDisponible() const { return disponible; }

void Libro::setDisponible(bool estado) { disponible = estado; }

void Libro::mostrarInfo() const {
    std::cout << "Título: " << titulo
              << " | Autor: " << autor
              << " | ISBN: " << isbn
              << " | Estado: " << (disponible ? "Disponible" : "Prestado") 
              << std::endl;
}
