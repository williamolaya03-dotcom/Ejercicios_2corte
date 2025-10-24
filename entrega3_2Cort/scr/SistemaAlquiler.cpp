#include "../include/SistemaAlquiler.h"
#include <iostream>

void SistemaAlquiler::registrarVehiculo(std::shared_ptr<Vehiculo> vehiculo) {
    vehiculos.push_back(vehiculo);
    std::cout << "Vehículo registrado correctamente.\n";
}

void SistemaAlquiler::mostrarVehiculosDisponibles() const {
    std::cout << "\n--- Vehículos disponibles ---\n";
    for (const auto& v : vehiculos) {
        if (v->estaDisponible())
            v->mostrarInformacion();
    }
}

void SistemaAlquiler::alquilarVehiculo(const std::string& placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (v->estaDisponible()) {
                v->setDisponible(false);
                std::cout << "Vehículo " << placa << " alquilado con éxito.\n";
            } else {
                std::cout << "El vehículo ya está alquilado.\n";
            }
            return;
        }
    }
    std::cout << "No se encontró un vehículo con la placa " << placa << ".\n";
}

void SistemaAlquiler::devolverVehiculo(const std::string& placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (!v->estaDisponible()) {
                v->setDisponible(true);
                std::cout << "Vehículo " << placa << " devuelto correctamente.\n";
            } else {
                std::cout << "Ese vehículo no estaba alquilado.\n";
            }
            return;
        }
    }
    std::cout << "No se encontró un vehículo con la placa " << placa << ".\n";
}
