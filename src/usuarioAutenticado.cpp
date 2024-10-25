#include "usuarioAutenticado.h"
#include <cstring>

// Constructor
UsuarioAutenticado::UsuarioAutenticado(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaNacimiento, Fecha fechaIngreso, Rol rol, bool estaHabilitado)
    : _idUsuario(idUsuario), _dni(dni), _fechaNacimiento(fechaNacimiento), _fechaIngreso(fechaIngreso), _rol(rol), _estaHabilitado(estaHabilitado) {
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';

    strncpy(_apellido, apellido, sizeof(_apellido) - 1);
    _apellido[sizeof(_apellido) - 1] = '\0';
}

// Getters
int UsuarioAutenticado::getIdUsuario() const {
    return _idUsuario;
}

const char* UsuarioAutenticado::getNombre() const {
    return _nombre;
}

const char* UsuarioAutenticado::getApellido() const {
    return _apellido;
}

int UsuarioAutenticado::getDni() const {
    return _dni;
}

Fecha UsuarioAutenticado::getFechaNacimiento() const {
    return _fechaNacimiento;
}

Fecha UsuarioAutenticado::getFechaIngreso() const {
    return _fechaIngreso;
}

Rol UsuarioAutenticado::getRol() const {
    return _rol;
}

bool UsuarioAutenticado::estaHabilitado() const {
    return _estaHabilitado;
}
