#include "Usuario.h"
#include <iostream>
using namespace std;

Usuario::Usuario(string nombre) : nombre(nombre) {}

string Usuario::getNombre() const { return nombre; }

void Usuario::realizarCompra(CarritoCompras& carrito) {
    if (carrito.estaVacio()) {
        cout << "El carrito está vacío, no se puede realizar la compra.\n";
        return;
    }
    double total = carrito.calcularTotal();
    historialCompras.push_back(total);
    cout << "Compra realizada por $" << total << endl;
}

void Usuario::mostrarHistorial() const {
    cout << "Historial de compras de " << nombre << ":\n";
    if (historialCompras.empty()) {
        cout << "No se han realizado compras.\n";
        return;
    }
    for (size_t i = 0; i < historialCompras.size(); ++i)
        cout << "Compra #" << i + 1 << ": $" << historialCompras[i] << endl;
}
