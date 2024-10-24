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
        cout << "5. Cambiar membres�a\n";
        cout << "6. Realizar pago\n";
        cout << "7. Consultar horarios\n";
        cout << "8. Presentar reclamo\n";
        cout << "9. Modificar contrase�a\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opci�n: ";
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
                cout << "�Gracias por formar parte de esta familia!\n";
                _usuario = nullptr;
                break;
            default:
                cout << "Opci�n inv�lida. Intente nuevamente.\n";
                break;
        }

    } while (opcion != 0);
}

void MenuSocio::modificarDatosPersonales() {
    // Implementar la l�gica para modificar datos personales
    cout << "Modificar datos personales...\n";
}

void MenuSocio::verEntrenadorDesignado() {
    // Implementar la l�gica para ver entrenador designado
    cout << "Ver entrenador designado...\n";
}

void MenuSocio::verEstadoContable() {
    // Implementar la l�gica para ver estado contable
    cout << "Ver estado contable...\n";
}

void MenuSocio::miRutina() {
    // Implementar la l�gica para mostrar la rutina
    cout << "Mi rutina...\n";
}

void MenuSocio::cambiarMembresia() {
    // Implementar la l�gica para cambiar membres�a
    cout << "Cambiar membres�a...\n";
}

void MenuSocio::realizarPago() {
    // Implementar la l�gica para realizar un pago
    cout << "Realizar pago...\n";
}

void MenuSocio::consultarHorarios() {
    // Implementar la l�gica para consultar horarios
    cout << "Consultar horarios...\n";
}

void MenuSocio::presentarReclamo() {
    // Implementar la l�gica para presentar un reclamo
    cout << "Presentar reclamo...\n";
}

void MenuSocio::modificarContrasena() {
    // Implementar la l�gica para modificar la contrase�a
    cout << "Modificar contrase�a...\n";
}
