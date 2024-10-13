#pragma once
#include <string>
#include "Entrenador.h"

class GestionArchivoEntrenadores
{
private:
    std::string _nombreArchivo;

public:
    GestionArchivoEntrenadores(std::string nombreArchivo);
    bool Guardar(Entrenador entrenador);
    bool Guardar(Entrenador entrenador, int posicion);
    int Buscar(int IDEntrenador);
    Entrenador Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, Entrenador *vector);
};
