#ifndef BICICLETA_H
#define BICICLETA_H

#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
private:
    bool tieneCanasto;

public:
    Bicicleta(std::string marca, std::string modelo, std::string placa, bool tieneCanasto);
    void mostrarInformacion() const override;
};

#endif
