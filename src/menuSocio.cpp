#include <iostream>
#include <cstring>
#include "menuSocio.h"
using namespace std;

MenuSocio::MenuSocio(UsuarioAutenticado usuario) {
    _usuario = usuario;
}

void MenuSocio::mostrarMenu() {
    int opcion;

    do {
        cout << "Menu Socio:\n";
        cout << "1. Ver entrenador designado\n";
        cout << "2. Mi rutina\n";
        cout << "3. Cambiar membresía\n";
        cout << "4. Realizar pago\n";
        cout << "5. Consultar horarios\n";
        cout << "6. Presentar reclamo\n";
        cout << "7. Modificar contraseña\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                verEntrenadorDesignado();
                break;
            case 2:
                verMiRutina();
                break;
            case 3:
                cambiarMembresia();
                break;
            case 4:
                realizarPago();
                break;
            case 5:
                consultarHorarios();
                break;
            case 6:
                presentarReclamo();
                break;
            case 7:
                modificarContrasena();
                break;
            case 0:
                cout << "¡Gracias por formar parte de esta familia!\n";
                _usuario = UsuarioAutenticado();
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
                break;
        }

    } while (opcion != 0);
}


void MenuSocio::verEntrenadorDesignado() {

    cout << "Ver entrenador designado...\n";
}

void MenuSocio::verMiRutina() {
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


