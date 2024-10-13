#include "socio.h"
#include <cstring>

Socio::Socio() : Usuario()
{
    _membresia = Membresia::FIT;
    strcpy(_estadoFisico, "");
    _idRutina = 0;
    _idEntrenadorAsignado = 0;
    _pinIngreso = 0;
}

Socio::Socio(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
             Membresia membresia, const char* estadoFisico, int idRutina, int idEntrenadorAsignado, int pinIngreso)
    : Usuario(idUsuario, nombre, apellido, dni, fechaIngreso, pass, rol, fechaNacimiento, estaHabilitado)
{
    _membresia = membresia;
    strncpy(_estadoFisico, estadoFisico, sizeof(_estadoFisico) - 1);
    _estadoFisico[sizeof(_estadoFisico) - 1] = '\0';
    _idRutina = idRutina;
    _idEntrenadorAsignado = idEntrenadorAsignado;
    _pinIngreso = pinIngreso;
}

Membresia Socio::getMembresia() const
{
    return _membresia;
}
void Socio::setMembresia(Membresia membresia)
{
    _membresia = membresia;
}

const char* Socio::getEstadoFisico() const
{
    return _estadoFisico;
}
void Socio::setEstadoFisico(const char* estadoFisico)
{
    strncpy(_estadoFisico, estadoFisico, sizeof(_estadoFisico) - 1);
    _estadoFisico[sizeof(_estadoFisico) - 1] = '\0';
}

int Socio::getIdRutina() const
{
    return _idRutina;
}
void Socio::setIdRutina(int idRutina)
{
    _idRutina = idRutina;
}

int Socio::getIdEntrenadorAsignado() const
{
    return _idEntrenadorAsignado;
}
void Socio::setIdEntrenadorAsignado(int idEntrenadorAsignado)
{
    _idEntrenadorAsignado = idEntrenadorAsignado;
}

int Socio::getPinIngreso() const
{
    return _pinIngreso;
}
void Socio::setPinIngreso(int pinIngreso)
{
    _pinIngreso = pinIngreso;
}

bool Socio::validarPin(int pin)
{
    return pin == _pinIngreso;
}
