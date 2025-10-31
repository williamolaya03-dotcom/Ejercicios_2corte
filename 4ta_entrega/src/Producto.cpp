#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(string nombre, double precio, int stock)
    : nombre(nombre), precio(precio), stock(stock) {}

string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }
int Producto::getStock() const { return stock; }

void Producto::reducirStock(int cantidad) {
    if (cantidad <= stock)
        stock -= cantidad;
}

void Producto::mostrarInformacion() const {
    cout << "Producto: " << nombre
         << " | Precio: $" << precio
         << " | Stock: " << stock << endl;
}
