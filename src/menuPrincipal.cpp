#include <iostream>
#include <cstring>
#include "autenticador.h"
#include "menuPrincipal.h"
#include "menuSocio.h"
#include "rol.h"

using namespace std;

void MenuPrincipal::mostrarMenu() {

        int dni;
        char contrasena[20];
        Rol rol;
        Autenticador autenticador;

        cout << "¡¡Bienvenido a MetalGym!!" << endl;
        cout << "Para continuar debe loguearse..." << endl;
        cout << "--------------------------------" << endl;

        cout << "Ingrese DNI: ";

        cin >> dni;

        cin.ignore();
        cout << "Ingrese contraseña: ";
        cin.getline(contrasena, sizeof(contrasena));

        UsuarioAutenticado* usuario = autenticador.autenticar(dni, contrasena);

        if (usuario != nullptr) {
            cout << "Autenticación exitosa. ¡Bienvenido, " << usuario->getNombre() << "!" << endl;

            rol = usuario->getRol();

            switch (rol) {
                case Rol::SOCIO: {
                    MenuSocio menuSocio = MenuSocio(usuario);
                    menuSocio.mostrarMenu();
                    break;
                }
                case Rol::ENTRENADOR: {
                    //MenuEntrenador menuEntrenador(*usuario);
                    //menuEntrenador.mostrarMenu();
                    break;
                }
                case Rol::GERENTE: {
                    //MenuGerente menuGerente(*usuario);
                    //menuGerente.mostrarMenu();
                    break;
                }
                default: {
                    cout << "Rol no soportado, contacte al administrador... " << endl;
                    break;
                }
            }
        } else {
            cout << "Autenticación fallida. Por favor, verifique sus credenciales..." << endl;
        }
        delete usuario;
    }

