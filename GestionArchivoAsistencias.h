#pragma once
#include <string>
#include "registroAsistencia.h"

class GestionArchivoAsistencias
{
private:
    std::string _nombreArchivo;

public:
    GestionArchivoAsistencias(std::string nombreArchivo);
    bool Guardar(RegistroAsistencia asistencia);
    bool Guardar(RegistroAsistencia asistencia, int posicion);
    int Buscar(int IDAsistencia);
    RegistroAsistencia Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, RegistroAsistencia *vector);
};
