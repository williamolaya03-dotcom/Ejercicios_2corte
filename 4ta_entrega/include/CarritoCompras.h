#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include "ItemCarrito.h"
#include <vector>

class CarritoCompras {
private:
    std::vector<ItemCarrito> items;

public:
    void agregarProducto(Producto producto, int cantidad);
    void eliminarProducto(std::string nombreProducto);
    double calcularTotal() const;
    void mostrarCarrito() const;
    bool estaVacio() const;
};

#endif
