#include "servicioEmpleado.h"
#include <iostream>
#include <cstring>
#include "gestionArchivoSocios.h"
using namespace std;

ServicioEmpleado::ServicioEmpleado(GestionArchivoEmpleado gestionArchivo) : _empleados(gestionArchivo) {
}

int ServicioEmpleado::idAutogenerado(){

    return 1; //implementar autogeneracion de ID

}

void ServicioEmpleado::verEmpleados(){

    int cant = _empleados.cantidadRegistros();
    cout << cant << " registros." << endl;
    Empleado emp;
    for(int i = 0; i < cant; i++){

        emp = _empleados.leer(i);

        cout << emp.getIdUsuario() << "\t"
             << emp.getLegajo() << "\t"
             << emp.getDni() << "\t"
             << emp.getFechaIngreso().toString() << "\t"
             << emp.getNombre() << "\t"
             << emp.getApellido() << "\t"
             << emp.getActividadPrincipal().getNombre() << endl;

        if((i + 1)%10 == 0){
            system("pause");
        }
    }
}

void ServicioEmpleado::verEmpleado(int dni) {

    int pos = _empleados.buscarDni(dni);

    if (pos == -1) {
        cout << "Empleado con DNI #" << dni << " no encontrado..." << endl;
    } else {

        Empleado emp = _empleados.leer(pos);

        cout << "Datos del Empleado" << endl;
        cout << "------------------------------" << endl;
        cout << "ID Usuario: " << emp.getIdUsuario() << endl;
        cout << "Legajo: " << emp.getLegajo() << endl;
        cout << "Nombre: " << emp.getNombre() << endl;
        cout << "Apellido: " << emp.getApellido() << endl;
        cout << "DNI: " << emp.getDni() << endl;
        cout << "Fecha Ingreso: " << emp.getFechaIngreso().toString() << endl;
        cout << "Fecha Nacimiento: " << emp.getFechaNacimiento().toString() << endl;
        cout << "Turno: " << emp.getTurno() << endl;
        cout << "Actividad Principal: " << emp.getActividadPrincipal().getNombre() << endl;
    }
}

void ServicioEmpleado::agregarEmpleado() {
    int idUsuario;
    char nombre[50];
    char apellido[50];
    int dni;
    Fecha fechaIngreso;
    char pass[50];
    Rol rol;
    Fecha fechaNacimiento;
    bool estaHabilitado = true;
    int legajo;
    Turno turno;
    Actividad actividadPrincipal;

    cout << "Agregar Empleado\n";
    cout << "------------------------------\n";

    cout << "DNI: ";
    cin >> dni;
    if(_empleados.buscarDni(dni) == -1){

        idUsuario = idAutogenerado();

        legajo = _empleados.cantidadRegistros() + 1;
        rol = Rol::ENTRENADOR;

        cout << "Nombre: ";
        cin.getline(nombre, sizeof(nombre));

        cout << "Apellido: ";
        cin.getline(apellido, sizeof(apellido));

        cout << "Fecha de Ingreso (formato dd/mm/aaaa): ";
        int dia, mes, anio;
        char separator;
        cin >> dia >> separator >> mes >> separator >> anio;
        fechaIngreso = Fecha(dia, mes, anio);

        cout << "Contraseña: ";
        cin.ignore();
        cin.getline(pass, sizeof(pass));

        cout << "Fecha de Nacimiento (formato dd/mm/aaaa): ";
        cin >> dia >> separator >> mes >> separator >> anio;
        fechaNacimiento = Fecha(dia, mes, anio);

        cout << "Legajo: ";
        cin >> legajo;

        cout << "Turno (0 para Mañana, 1 para Tarde, 2 para Noche): ";
        int turnoInput;
        cin >> turnoInput;
        turno = static_cast<Turno>(turnoInput);

        cout << "Actividad Principal: ";
        // LOGICA PARA LLAMAR AL SERVICIO ACTIVIDAD
        //  - MOSTRAR ACTIVIDADES
        //  - SELECCIONAR Y DEVOLVER ACTIVIDAD
        //  - PODER CREAR ACTIVIDAD Y DEVOVERLA
        // TODO DESDE EL SERVICIOACTIVIDAD
        Empleado nuevoEmpleado(nombre, apellido, dni, idUsuario, fechaNacimiento, fechaIngreso, pass, estaHabilitado, rol, legajo, turno, actividadPrincipal);

        _empleados.guardar(nuevoEmpleado);

        cout << "Empleado agregado correctamente.\n";
    } else {
        cout << "Ya existe un empleado con este DNI" << endl;
    }
};

void ServicioEmpleado::modificarEmpleado(int legajo) {

    int pos = _empleados.buscarLegajo(legajo);

    if (pos == -1) {
        cout << "Empleado con legajo #" << legajo << " no encontrado." << endl;
        return;
    }

    Empleado emp = _empleados.leer(pos);

    int opcion;
    do {
        cout << "\nModificar Empleado\n";
        cout << "------------------------------" << endl;
        cout << "1. Cambiar Turno" << endl;
        cout << "2. Cambiar Actividad Principal" << endl;
        cout << "3. Cambiar Estado de Habilitación" << endl;
        cout << "7. Cancelar" << endl;
        cout << "0. Guardar y Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: {
                cout << "Turno actual (" << static_cast<int>(emp.getTurno()) << ")" << endl;
                cout << "Seleccione el nuevo turno (0 para Mañana, 1 para Tarde, 2 para Noche): ";
                int turno;
                cin >> turno;
                emp.setTurno(static_cast<Turno>(turno));
                cout << "Turno actualizado correctamente." << endl;
                break;
            }
            case 2: {
                cout << "Actividad Principal actual: " << emp.getActividadPrincipal().getNombre() << endl;
                // LOGICA PARA LLAMAR AL SERVICIO ACTIVIDAD
                //  - MOSTRAR ACTIVIDADES
                //  - SELECCIONAR Y DEVOLVER ACTIVIDAD
                //  - PODER CREAR ACTIVIDAD Y DEVOVERLA
                // TODO DESDE EL SERVICIOACTIVIDAD
                cout << "Actividad Principal actualizada correctamente.\n";
                break;
            }
            case 3: {
                cout << "Estado de Habilitación actual: " << (emp.getEstaHabilitado() ? "Habilitado" : "Deshabilitado") << endl;
                cout << "Ingrese el nuevo estado (1 para Habilitado, 0 para Deshabilitado): ";
                bool nuevoEstado;
                cin >> nuevoEstado;
                emp.setEstaHabilitado(nuevoEstado);
                cout << "Estado de Habilitación actualizado correctamente." << endl;
                break;
            }
            case 0: {
                if (_empleados.guardar(emp, pos)) {
                    cout << "¡Cambios guardados!" << endl;
                } else {
                    cout << "Ocurrió un error al guardar, contacte al administrador del programa." << endl;
                }
                opcion = 0;
                break;
            }
            case 7:
                cout << "Cancelando cambios.\n";
                opcion = 0;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 0);
}

void ServicioEmpleado::verSociosAsociados(int legajo){

    int pos = _empleados.buscarLegajo(legajo);

    if (pos == -1) {
        cout << "Empleado con legajo #" << legajo << " no encontrado." << endl;
        return;
    }

    Empleado emp = _empleados.leer(pos);

    if(emp.getRol() == Rol::ENTRENADOR){
        GestionArchivoSocios socios("socios.dat");
        socios.verSociosPorEntrenador(emp.getIdUsuario());
    } else {
        cout << "Usted no posee rol de entrenador.." << endl;
    }

};

void ServicioEmpleado::modificarContrasena(int legajo){

    int pos = _empleados.buscarLegajo(legajo);

    if (pos == -1) {
        cout << "Empleado con legajo #" << legajo << " no encontrado." << endl;
        return;
    }

    Empleado emp = _empleados.leer(pos);
    char contra1[20], contra2[20];

    cout << "Ingrese su nueva contraseña: ";
    cin >> contra1;
    cout << "Repita nuevamente su contraseña: ";
    cin >> contra2;

    contra1[19] = '\0';
    contra2[19] = '\0';

    if (strcmp(contra1, contra2)==0){
        emp.setPass(contra1);
         if (_empleados.guardar(emp, pos)) {
            cout << "Contraseña modificada y guardada correctamente." << endl;
        } else {
            cout << "Error al guardar los cambios. Contacte al administrador del sistema..." << endl;
        }
    } else {
        cout << "Contraseñas no coinciden, intente nuevamente ..." << endl;
    }
};
