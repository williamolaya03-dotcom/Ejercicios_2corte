#include "CarritoCompras.h"
#include <iostream>
using namespace std;

void CarritoCompras::agregarProducto(Producto producto, int cantidad) {
    items.push_back(ItemCarrito(producto, cantidad));
}

void CarritoCompras::eliminarProducto(string nombreProducto) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getNombreProducto() == nombreProducto) {
            items.erase(it);
            cout << "Producto eliminado del carrito.\n";
            return;
        }
    }
    cout << "Producto no encontrado en el carrito.\n";
}

double CarritoCompras::calcularTotal() const {
    double total = 0;
    for (const auto& item : items)
        total += item.calcularSubtotal();
    return total;
}

void CarritoCompras::mostrarCarrito() const {
    if (items.empty()) {
        cout << "El carrito está vacío.\n";
        return;
    }
    cout << "Contenido del carrito:\n";
    for (const auto& item : items)
        item.mostrarItem();
    cout << "Total a pagar: $" << calcularTotal() << endl;
}

bool CarritoCompras::estaVacio() const {
    return items.empty();
}
