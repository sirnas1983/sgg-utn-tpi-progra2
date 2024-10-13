#pragma once
#include <string>
#include "DetalleRutina.h"

class GestionArchivoDetalleRutinas
{
private:
    std::string _nombreArchivo;

public:
    GestionArchivoDetalleRutinas(std::string nombreArchivo);
    bool Guardar(DetalleRutina detalleRutina);
    bool Guardar(DetalleRutina detalleRutina, int posicion);
    int Buscar(int IDDetalleRutina);
    DetalleRutina Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, DetalleRutina *vector);
};
