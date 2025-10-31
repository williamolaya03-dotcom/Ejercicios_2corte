#include <iostream>
#include <vector>
#include "DispositivoInteligente.h"

int main() {
    // Contenedor STL para varios dispositivos
    std::vector<DispositivoInteligente> dispositivos;

    // Crear y agregar algunos dispositivos al vector
    dispositivos.emplace_back("Televisor", false, 100.0f);
    dispositivos.emplace_back("Lámpara", true, 20.0f);
    dispositivos.emplace_back("Ventilador", false, 60.0f);

    float horas = 4.0f;
    std::cout << "Simulando consumo durante " << horas << " horas:\n\n";

    // Recorrer el vector y calcular consumo
    for (auto &d : dispositivos) {
        d.encender();
        float consumo = d.medirConsumo(horas);
        std::cout << d.getNombre() << " consumió "
                  << consumo << " Wh en " << horas << " horas.\n";
    }

    return 0;
}

