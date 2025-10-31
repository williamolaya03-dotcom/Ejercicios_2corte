#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include "Producto.h"

class ItemCarrito {
private:
    Producto producto;
    int cantidad;

public:
    ItemCarrito(Producto producto, int cantidad);

    double calcularSubtotal() const;
    void mostrarItem() const;
    std::string getNombreProducto() const;
};

#endif
