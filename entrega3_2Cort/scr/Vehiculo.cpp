#include "../include/Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(std::string marca, std::string modelo, std::string placa, bool disponible)
    : marca(marca), modelo(modelo), placa(placa), disponible(disponible) {}

bool Vehiculo::estaDisponible() const {
    return disponible;
}

void Vehiculo::setDisponible(bool estado) {
    disponible = estado;
}

std::string Vehiculo::getPlaca() const {
    return placa;
}

void Vehiculo::mostrarInformacion() const {
    std::cout << "Vehículo genérico - Marca: " << marca
              << ", Modelo: " << modelo
              << ", Placa: " << placa
              << ", Estado: " << (disponible ? "Disponible" : "Alquilado") << std::endl;
}
