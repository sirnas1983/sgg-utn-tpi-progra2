#pragma once
#include <string>
#include "registroPago.h"

class GestionArchivoPagos {
private:
    std::string _nombreArchivo;

public:
    GestionArchivoPagos(std::string nombreArchivo);
    bool Guardar(RegistroPago pago);
    bool Guardar(RegistroPago pago, int posicion);
    int Buscar(int IDPago);
    RegistroPago Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, RegistroPago *vector);
};
