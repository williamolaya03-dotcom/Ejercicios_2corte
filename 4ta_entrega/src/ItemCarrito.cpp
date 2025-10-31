#include "ItemCarrito.h"
#include <iostream>
using namespace std;

ItemCarrito::ItemCarrito(Producto producto, int cantidad)
    : producto(producto), cantidad(cantidad) {}

double ItemCarrito::calcularSubtotal() const {
    return producto.getPrecio() * cantidad;
}

void ItemCarrito::mostrarItem() const {
    cout << producto.getNombre() << " x" << cantidad
         << " - Subtotal: $" << calcularSubtotal() << endl;
}

string ItemCarrito::getNombreProducto() const {
    return producto.getNombre();
}
