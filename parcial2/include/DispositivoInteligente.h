#ifndef DISPOSITIVO_INTELIGENTE_H
#define DISPOSITIVO_INTELIGENTE_H

#include <string>

/**
 * @class DispositivoInteligente
 * @brief Representa un dispositivo inteligente que puede encenderse, apagarse y medir su consumo de energía.
 */
class DispositivoInteligente {
private:
    std::string nombre;        ///< Nombre del dispositivo.
    bool estado;               ///< Estado del dispositivo: true = encendido, false = apagado.
    float consumoEnergia;      ///< Consumo energético en vatios/hora.
    bool controlRemotoBloqueado; ///< Indica si el control remoto está bloqueado.

public:
    /**
     * @brief Constructor que inicializa todos los atributos del dispositivo.
     * @param nombre Nombre del dispositivo.
     * @param estado Estado inicial (true = encendido, false = apagado).
     * @param consumoEnergia Consumo energético en W/h.
     */
    DispositivoInteligente(const std::string& nombre, bool estado, float consumoEnergia);

    /**
     * @brief Enciende el dispositivo.
     */
    void encender();

    /**
     * @brief Apaga el dispositivo.
     */
    void apagar();

    /**
     * @brief Calcula el consumo total de energía durante un número de horas.
     * @param horas Cantidad de horas en uso.
     * @return Energía total consumida (Wh).
     */
    float medirConsumo(float horas) const;

    /**
     * @brief Bloquea el control remoto del dispositivo.
     */
    void bloquearControlRemoto();

    /**
     * @brief Desbloquea el control remoto del dispositivo.
     */
    void desbloquearControlRemoto();

    /**
     * @brief Verifica si el dispositivo está encendido.
     * @return true si está encendido, false si está apagado.
     */
    bool estaEncendido() const;

    /**
     * @brief Obtiene el nombre del dispositivo.
     * @return Nombre del dispositivo.
     */
    std::string getNombre() const;
};

#endif // DISPOSITIVO_INTELIGENTE_H
