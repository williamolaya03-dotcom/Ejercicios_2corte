#include "../include/SistemaAlquiler.h"
#include "../include/Auto.h"
#include "../include/Bicicleta.h"
#include <iostream>
#include <memory>

int main() {
    SistemaAlquiler sistema;

    // Registrar algunos vehículos
    sistema.registrarVehiculo(std::make_shared<Auto>("Toyota", "Corolla", "ABC123", 5));
    sistema.registrarVehiculo(std::make_shared<Auto>("Chevrolet", "Onix", "XYZ789", 4));
    sistema.registrarVehiculo(std::make_shared<Bicicleta>("GW", "Alloy", "BICI001", true));

    sistema.mostrarVehiculosDisponibles();

    // Alquilar un vehículo
    sistema.alquilarVehiculo("ABC123");
    sistema.mostrarVehiculosDisponibles();

    // Intentar volver a alquilar el mismo
    sistema.alquilarVehiculo("ABC123");

    // Devolverlo
    sistema.devolverVehiculo("ABC123");
    sistema.mostrarVehiculosDisponibles();

    return 0;
}
