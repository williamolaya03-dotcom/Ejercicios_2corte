#ifndef USUARIO_H
#define USUARIO_H

#include "CarritoCompras.h"
#include <string>
#include <vector>

class Usuario {
private:
    std::string nombre;
    std::vector<double> historialCompras;

public:
    Usuario(std::string nombre);

    void realizarCompra(CarritoCompras& carrito);
    void mostrarHistorial() const;
    std::string getNombre() const;
};

#endif
