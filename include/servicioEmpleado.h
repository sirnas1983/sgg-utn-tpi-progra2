#ifndef SERVICIOENTRENADOR_H
#define SERVICIOENTRENADOR_H
#include "gestionArchivoEmpleados.h"

class ServicioEmpleado
{
    private:
        GestionArchivoEmpleado _empleados;

    public:
        ServicioEmpleado(GestionArchivoEmpleado empleados);
        void verEmpleados();
        void verEmpleado(int dni);
        void agregarEmpleado();
        void modificarEmpleado(int legajo);
        void verSociosAsociados(int legajo);
        void modificarContrasena(int legajo);
        int idAutogenerado();


};

#endif // SERVICIOENTRENADOR_H
