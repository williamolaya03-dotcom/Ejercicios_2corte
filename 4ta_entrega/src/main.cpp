#include "Producto.h"
#include "CarritoCompras.h"
#include "Usuario.h"
#include <iostream>
using namespace std;

int main() {
    Producto p1("Camiseta", 25.5, 10);
    Producto p2("Pantalón", 40.0, 8);
    Producto p3("Zapatos", 60.0, 5);

    Usuario usuario("Juan Pérez");
    CarritoCompras carrito;

    carrito.agregarProducto(p1, 2);
    carrito.agregarProducto(p3, 1);

    carrito.mostrarCarrito();

    usuario.realizarCompra(carrito);
    usuario.mostrarHistorial();

    return 0;
}
