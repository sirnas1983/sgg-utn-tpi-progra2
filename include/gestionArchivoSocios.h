#pragma once
#include <string>
#include "socio.h"

class GestionArchivoSocios{
    private:
        std::string _nombreArchivo;

    public:
        GestionArchivoSocios(std::string nombreArchivo);
        bool guardar(Socio socio);
        bool guardar(Socio socio, int posicion);
        int buscarId(int IdUsuario);
        int buscarDni(int dni);
        Socio leer(int posicion);
        int cantidadRegistros();
        void leer(int cantidadRegistros, Socio* vect);
};
