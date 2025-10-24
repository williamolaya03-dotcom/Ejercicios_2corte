#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    bool disponible;

public:
    Vehiculo(std::string marca, std::string modelo, std::string placa, bool disponible = true);
    virtual ~Vehiculo() = default;

    bool estaDisponible() const;
    void setDisponible(bool estado);
    std::string getPlaca() const;

    // Método virtual: se redefine en clases hijas
    virtual void mostrarInformacion() const;
};

#endif
