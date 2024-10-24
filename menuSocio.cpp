#include <iostream>
#include <cstring>
#include "menuSocio.h"
using namespace std;

MenuSocio::MenuSocio(const UsuarioAutenticado& usuario) : _usuario(usuario) {}

void MenuSocio::mostrarMenu() {
    int opcion;

    do {
        cout << "Menu Socio:\n";
        cout << "1. Modificar datos personales\n";
        cout << "2. Ver entrenador designado\n";
        cout << "3. Ver estado contable\n";
        cout << "4. Mi rutina\n";
        cout << "5. Cambiar membresía\n";
        cout << "6. Realizar pago\n";
        cout << "7. Consultar horarios\n";
        cout << "8. Presentar reclamo\n";
        cout << "9. Modificar contraseña\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                modificarDatosPersonales();
                break;
            case 2:
                verEntrenadorDesignado();
                break;
            case 3:
                verEstadoContable();
                break;
            case 4:
                miRutina();
                break;
            case 5:
                cambiarMembresia();
                break;
            case 6:
                realizarPago();
                break;
            case 7:
                consultarHorarios();
                break;
            case 8:
                presentarReclamo();
                break;
            case 9:
                modificarContrasena();
                break;
            case 0:
                cout << "¡Gracias por formar parte de esta familia!\n";
                _usuario = nullptr;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
                break;
        }

    } while (opcion != 0);
}

void MenuSocio::modificarDatosPersonales() {
    // Implementar la lógica para modificar datos personales
    cout << "Modificar datos personales...\n";
}

void MenuSocio::verEntrenadorDesignado() {
    // Implementar la lógica para ver entrenador designado
    cout << "Ver entrenador designado...\n";
}

void MenuSocio::verEstadoContable() {
    // Implementar la lógica para ver estado contable
    cout << "Ver estado contable...\n";
}

void MenuSocio::miRutina() {
    // Implementar la lógica para mostrar la rutina
    cout << "Mi rutina...\n";
}

void MenuSocio::cambiarMembresia() {
    // Implementar la lógica para cambiar membresía
    cout << "Cambiar membresía...\n";
}

void MenuSocio::realizarPago() {
    // Implementar la lógica para realizar un pago
    cout << "Realizar pago...\n";
}

void MenuSocio::consultarHorarios() {
    // Implementar la lógica para consultar horarios
    cout << "Consultar horarios...\n";
}

void MenuSocio::presentarReclamo() {
    // Implementar la lógica para presentar un reclamo
    cout << "Presentar reclamo...\n";
}

void MenuSocio::modificarContrasena() {
    // Implementar la lógica para modificar la contraseña
    cout << "Modificar contraseña...\n";
}
