#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string isbn;
    bool disponible;

public:
    // Constructor
    Libro(std::string titulo, std::string autor, std::string isbn, bool disponible = true);

    
    std::string getTitulo() const;
    std::string getAutor() const;
    std::string getISBN() const;
    bool estaDisponible() const;

    
    void setDisponible(bool estado);

    // Mostrar información
    void mostrarInfo() const;
};

#endif
