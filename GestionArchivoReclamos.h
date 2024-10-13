#pragma once
#include <string>
#include "Reclamo.h"

class GestionArchivoReclamos {
private:
    std::string _nombreArchivo;

public:
    GestionArchivoReclamos(std::string nombreArchivo);
    bool Guardar(Reclamo reclamo);
    bool Guardar(Reclamo reclamo, int posicion);
    int Buscar(int IDReclamo);
    Reclamo Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, Reclamo *vector);
};
