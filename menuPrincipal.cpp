#include <iostream>
#include <cstring>
#include "autenticador.h"
#include "menuPrincipal.h"
#include "menuSocio.h"
#include "rol.h"

using namespace std;

void MenuPrincipal::mostrarMenu() {

        cout << "¡¡Bienvenido a MetalGym!!\n";
        cout << "--------------\n";

        // Solcitar Rol
        cout << "Ingrese tipo de usuario:\n0. Socio\n1. Entrenador\n2. Gerente\n";
        cout << "--------------" << endl;
        int _rol;
        cin >> _rol;

        while (_rol < 0 || _rol > 2) {
            cout << "Rol inválido. Intente nuevamente...\n";
            cin >> _rol;
        }

        Rol rol = static_cast<Rol>(_rol);

        // Solicitar DNI
        cout << "Ingrese DNI: ";
        int dni;
        cin >> dni;

        // Limpiar el buffer para evitar problemas al leer la contraseña
        cin.ignore();

        // Solicitar contraseña
        cout << "Ingrese contraseña: ";
        char contrasena[20];
        cin.getline(contrasena, sizeof(contrasena)); // Usar getline para permitir espacios

        Autenticador autenticador;
        usuario = autenticador.autenticar(dni, contrasena, rol);

        if (usuario != nullptr) {
            cout << "Autenticación exitosa. ¡Bienvenido, " << usuario->getNombre() << "!\n";

            switch (rol) {
                case 0: {
                    MenuSocio menuSocio = MenuSocio(*usuario);
                    menuSocio.mostrarMenu();
                    break;
                }
                case 1: {
                    MenuEntrenador menuEntrenador(*usuario);
                    menuEntrenador.mostrarMenu();
                    break;
                }
                case 2: {
                    MenuGerente menuGerente(*usuario);
                    menuGerente.mostrarMenu();
                    break;
                }
            }
        } else {
            cout << "Autenticación fallida. Por favor, verifique sus credenciales.\n";
        }
    }

