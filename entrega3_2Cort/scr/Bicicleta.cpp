#include "../include/Bicicleta.h"
#include <iostream>

Bicicleta::Bicicleta(std::string marca, std::string modelo, std::string placa, bool tieneCanasto)
    : Vehiculo(marca, modelo, placa), tieneCanasto(tieneCanasto) {}

void Bicicleta::mostrarInformacion() const {
    std::cout << "Bicicleta - Marca: " << marca
              << ", Modelo: " << modelo
              << ", Placa: " << placa
              << ", Canasto: " << (tieneCanasto ? "Sí" : "No")
              << ", Estado: " << (disponible ? "Disponible" : "Alquilado") << std::endl;
}
