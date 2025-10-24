#include "../include/Auto.h"
#include <iostream>

Auto::Auto(std::string marca, std::string modelo, std::string placa, int capacidadPasajeros)
    : Vehiculo(marca, modelo, placa), capacidadPasajeros(capacidadPasajeros) {}

void Auto::mostrarInformacion() const {
    std::cout << "Auto - Marca: " << marca
              << ", Modelo: " << modelo
              << ", Placa: " << placa
              << ", Capacidad: " << capacidadPasajeros << " pasajeros"
              << ", Estado: " << (disponible ? "Disponible" : "Alquilado") << std::endl;
}
