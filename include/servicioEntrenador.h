#ifndef SERVICIOENTRENADOR_H
#define SERVICIOENTRENADOR_H
#include "gestionArchivoEmpleados.h"

class ServicioEntrenador
{
    private:
        GestionArchivoEmpleado* _empleados;

    public:
        ServicioEntrenador(GestionArchivoEmpleado* empleados);
        void verEmpleado(int dni);
        void agregarEmpleado();
        void modificarEmpleado(int idEmpleado);
        void verSociosAsociados(int idEmpleado);
        void asignarTurno(int idEmpleado);
        void verHorariosAsignados();
        void modificarContrasena(int idEmpleado);


};

#endif // SERVICIOENTRENADOR_H
