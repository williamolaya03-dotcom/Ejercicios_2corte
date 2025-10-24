#include "../include/Biblioteca.h"
#include <iostream>

int main() {
    Biblioteca miBiblioteca;

    // Crear algunos libros
    Libro libro1("Cien años de soledad", "Gabriel García Márquez", "12345");
    Libro libro2("El principito", "Antoine de Saint-Exupéry", "67890");
    Libro libro3("1984", "George Orwell", "54321");

    // Agregar a la biblioteca
    miBiblioteca.agregarLibro(libro1);
    miBiblioteca.agregarLibro(libro2);
    miBiblioteca.agregarLibro(libro3);

    // Mostrar disponibles
    miBiblioteca.mostrarLibrosDisponibles();

    // Buscar por autor
    miBiblioteca.buscarPorAutor("George Orwell");

    // Eliminar uno
    miBiblioteca.eliminarLibro("67890");

    // Mostrar de nuevo
    miBiblioteca.mostrarLibrosDisponibles();

    return 0;
}
