#include "autenticador.h"
#include "usuario.h"
#include <cstring>
#include "gestionArchivoEmpleados.h"
#include "gestionArchivoSocios.h"


UsuarioAutenticado* Autenticador::autenticar(const int dni, const char* pass) {

    Usuario* usuario = buscarUsuario(dni, pass);

    if (usuario != nullptr && usuario->getEstaHabilitado()) {
        UsuarioAutenticado* authUs = new UsuarioAutenticado(
            usuario->getIdUsuario(),
            usuario->getNombre(),
            usuario->getApellido(),
            usuario->getDni(),
            usuario->getFechaNacimiento(),
            usuario->getFechaIngreso(),
            usuario->getRol(),
            usuario->getEstaHabilitado()
        );
        delete usuario;
        return authUs;
    }
    delete usuario;

    return nullptr;
}

Usuario* Autenticador::buscarUsuario(const int dni, const char* pass) {
    GestionArchivoEmpleado empleados("empleados.dat");
    GestionArchivoSocios socios("socios.dat");

    int posEmpleado = empleados.buscarDni(dni);
    if (posEmpleado != -1) {
        Empleado emp = empleados.leer(posEmpleado);
        if (emp.getPass() == pass) {
            return new Empleado(emp);
        }
    }

    int posSocio = socios.buscarDni(dni);
    if (posSocio != -1) {
        Socio soc = socios.leer(posSocio);
        if (soc.getPass() == pass) {
            return new Socio(soc);
        }
    }
    return nullptr;
}

