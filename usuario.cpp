#include "usuario.h"
#include <cstring>

Usuario::Usuario()
{
    _idUsuario = 0;
    strcpy(_nombre, "");
    strcpy(_apellido, "");
    _dni = 0;
    _fechaIngreso = Fecha();
    strcpy(_pass, "");
    _rol = Rol::SOCIO;
    _fechaNacimiento = Fecha();
    _estaHabilitado = true;
}

Usuario::Usuario(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado)
{
    _idUsuario = idUsuario;
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';

    strncpy(_apellido, apellido, sizeof(_apellido) - 1);
    _apellido[sizeof(_apellido) - 1] = '\0';

    _dni = dni;
    _fechaIngreso = fechaIngreso;

    strncpy(_pass, pass, sizeof(_pass) - 1);
    _pass[sizeof(_pass) - 1] = '\0';

    _rol = rol;
    _fechaNacimiento = fechaNacimiento;
    _estaHabilitado = estaHabilitado;
}

int Usuario::getIdUsuario() const
{
    return _idUsuario;
}
const char* Usuario::getNombre() const
{
    return _nombre;
}
const char* Usuario::getApellido() const
{
    return _apellido;
}
int Usuario::getDni() const
{
    return _dni;
}
Fecha Usuario::getFechaIngreso() const
{
    return _fechaIngreso;
}
const char* Usuario::getPass() const
{
    return _pass;
}
Rol Usuario::getRol() const
{
    return _rol;
}
Fecha Usuario::getFechaNacimiento() const
{
    return _fechaNacimiento;
}
bool Usuario::getEstaHabilitado() const
{
    return _estaHabilitado;
}
bool Usuario::validarContrasenia(const char* pass){
    return pass == _pass;
}
void Usuario::setIdUsuario(int idUsuario)
{
    _idUsuario = idUsuario;
}
void Usuario::setNombre(const char* nombre)
{
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';
}
void Usuario::setApellido(const char* apellido)
{
    strncpy(_apellido, apellido, sizeof(_apellido) - 1);
    _apellido[sizeof(_apellido) - 1] = '\0';
}
void Usuario::setDni(int dni)
{
    _dni = dni;
}
void Usuario::setFechaIngreso(Fecha fechaIngreso)
{
    _fechaIngreso = fechaIngreso;
}
void Usuario::setPass(const char* pass)
{
    strncpy(_pass, pass, sizeof(_pass) - 1);
    _pass[sizeof(_pass) - 1] = '\0';
}
void Usuario::setRol(Rol rol)
{
    _rol = rol;
}
void Usuario::setFechaNacimiento(Fecha fechaNacimiento)
{
    _fechaNacimiento = fechaNacimiento;
}
void Usuario::setEstaHabilitado(bool estaHabilitado)
{
    _estaHabilitado = estaHabilitado;
}
