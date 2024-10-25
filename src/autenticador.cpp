#include "autenticador.h"
#include "usuario.h"
#include "gestionArchivoEmpleados.h"
#include "gestionArchivoSocios.h"

#include <cstring>

// Método que autentica al usuario y devuelve un objeto UsuarioAutenticado
UsuarioAutenticado Autenticador::autenticar(const int dni, const char* pass) {
    Usuario usuario = buscarUsuario(dni, pass);

    if (usuario.getEstaHabilitado()) {
        UsuarioAutenticado authUs(
            usuario.getIdUsuario(),
            usuario.getNombre(),
            usuario.getApellido(),
            usuario.getDni(),
            usuario.getFechaNacimiento(),
            usuario.getFechaIngreso(),
            usuario.getRol(),
            usuario.getEstaHabilitado()
        );
        return authUs; // Retorna el objeto autenticado
    }

    return UsuarioAutenticado(); // Retorna un objeto por defecto
}

// Método que busca un usuario y devuelve un objeto Usuario
Usuario Autenticador::buscarUsuario(const int dni, const char* pass) {
    GestionArchivoEmpleado empleados("empleados.dat");
    GestionArchivoSocios socios("socios.dat");

    int posEmpleado = empleados.buscarDni(dni);
    if (posEmpleado != -1) {
        Empleado emp = empleados.leer(posEmpleado);
        if (strcmp(emp.getPass(), pass) == 0) { // Verifica la contraseña
            return emp; // Retorna el objeto empleado
        }
    }

    int posSocio = socios.buscarDni(dni);
    if (posSocio != -1) {
        Socio soc = socios.leer(posSocio);
        if (strcmp(soc.getPass(), pass) == 0) { // Verifica la contraseña
            return soc; // Retorna el objeto socio
        }
    }

    return Usuario(); // Retorna un objeto Usuario vacío si no se encuentra
}
