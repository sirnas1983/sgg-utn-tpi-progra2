#include "servicioEntrenador.h"

ServicioEntrenador::ServicioEntrenador(GestionArchivoEmpleado* empleados)
{
            _empleados = empleados;
}

void ServicioEntrenador::verEmpleado(int dni){
    int pos = _empleados.buscarDni(dni);
    if(pos == -1){
        cout << "Empleado con dni #" << dni << " no encontrado..." << endl;
    }
};

void ServicioEntrenador::agregarEmpleado(){
};

void ServicioEntrenador::modificarEmpleado(int idEmpleado){
};

void ServicioEntrenador::verSociosAsociados(int idEmpleado){
};

void ServicioEntrenador::asignarTurno(int idEmpleado){
};

void ServicioEntrenador::verHorariosAsignados(){
};

void ServicioEntrenador::modificarContrasena(int idEmpleado){
};

