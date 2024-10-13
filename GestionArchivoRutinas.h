#pragma once
#include <string>
#include "Rutina.h"

class GestionArchivoRutinas
{
private:
    std::string _nombreArchivo;

public:
    GestionArchivoRutinas(std::string nombreArchivo);
    bool Guardar(Rutina rutina);
    bool Guardar(Rutina rutina, int posicion);
    int Buscar(int IDRutina);
    Rutina Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, Rutina *vector);
};
