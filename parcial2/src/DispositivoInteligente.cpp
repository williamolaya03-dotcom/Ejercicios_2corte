#include "DispositivoInteligente.h"

DispositivoInteligente::DispositivoInteligente(const std::string& n, bool e, float c)
    : nombre(n), estado(e), consumoEnergia(c), controlRemotoBloqueado(false) {}

void DispositivoInteligente::encender() {
    if (!controlRemotoBloqueado)
        estado = true;
}

void DispositivoInteligente::apagar() {
    if (!controlRemotoBloqueado)
        estado = false;
}

float DispositivoInteligente::medirConsumo(float horas) const {
    return estado ? consumoEnergia * horas : 0.0f;
}

void DispositivoInteligente::bloquearControlRemoto() {
    controlRemotoBloqueado = true;
}

void DispositivoInteligente::desbloquearControlRemoto() {
    controlRemotoBloqueado = false;
}

bool DispositivoInteligente::estaEncendido() const {
    return estado;
}

std::string DispositivoInteligente::getNombre() const {
    return nombre;
}
