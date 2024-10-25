#pragma once
#include <string>
#include "empleado.h"

class GestionArchivoEmpleado{
    private:
        std::string _nombreArchivo;

    public:
        GestionArchivoEmpleado(std::string nombreArchivo);
        bool guardar(Empleado empleado);
        bool guardar(Empleado empleado, int posicion);
        int buscarId(int IdUsuario);
        int buscarDni(int dni);
        int buscarLegajo(int dni);
        Empleado leer(int posicion);
        int cantidadRegistros();
        void leer(int cantidadRegistros, Empleado* vect);
};
