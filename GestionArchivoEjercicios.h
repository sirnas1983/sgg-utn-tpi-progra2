#pragma once
#include <string>
#include "ejercicio.h"

class GestionArchivoEjercicios
{
private:
    std::string _nombreArchivo;

public:
    GestionArchivoEjercicios(std::string nombreArchivo);
    bool Guardar(Ejercicio ejercicio);
    bool Guardar(Ejercicio ejercicio, int posicion);
    int Buscar(int IDEjercicio);
    Ejercicio Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, Ejercicio *vector);
};
