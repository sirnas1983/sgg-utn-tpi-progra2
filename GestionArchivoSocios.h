#pragma once
#include <string>
#include "Socio.h"

class GestionArchivoSocios
{
private:
    std::string _nombreArchivo;

public:
    GestionArchivoSocios(std::string nombreArchivo);
    bool Guardar(Socio socio);
    bool Guardar(Socio socio, int posicion);
    int Buscar(int IDSocio);
    Socio Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, Socio *vector);
};
