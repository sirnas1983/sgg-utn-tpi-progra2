#include "socio.h"
#include <cstring>

Socio::Socio()
    : Usuario(), _membresia(Membresia::FIT), _idRutina(0), _idEntrenadorAsignado(0), _pinIngreso(0)
{
    strcpy(_estadoFisico, "");
}

Socio::Socio(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaNacimiento, Fecha fechaIngreso, const char* pass, Rol rol, bool estaHabilitado,
             Membresia membresia, const char* estadoFisico, int idRutina, int idEntrenadorAsignado, int pinIngreso)
    : Usuario(idUsuario, nombre, apellido, dni, fechaNacimiento, fechaIngreso, pass, rol, estaHabilitado), // Llamada al constructor base Usuario
      _membresia(membresia), _idRutina(idRutina), _idEntrenadorAsignado(idEntrenadorAsignado), _pinIngreso(pinIngreso)
{
    strncpy(_estadoFisico, estadoFisico, sizeof(_estadoFisico) - 1);
    _estadoFisico[sizeof(_estadoFisico) - 1] = '\0'; // Asegurarse de que la cadena esté terminada en nulo
}

// Getters
Membresia Socio::getMembresia() const { return _membresia; }
const char* Socio::getEstadoFisico() const { return _estadoFisico; }
int Socio::getIdRutina() const { return _idRutina; }
int Socio::getIdEntrenadorAsignado() const { return _idEntrenadorAsignado; }
int Socio::getPinIngreso() const { return _pinIngreso; }

// Setters
void Socio::setMembresia(Membresia membresia) { _membresia = membresia; }

void Socio::setEstadoFisico(const char* estadoFisico)
{
    strncpy(_estadoFisico, estadoFisico, sizeof(_estadoFisico) - 1);
    _estadoFisico[sizeof(_estadoFisico) - 1] = '\0';
}

void Socio::setIdRutina(int idRutina) { _idRutina = idRutina; }
void Socio::setIdEntrenadorAsignado(int idEntrenadorAsignado) { _idEntrenadorAsignado = idEntrenadorAsignado; }
void Socio::setPinIngreso(int pinIngreso) { _pinIngreso = pinIngreso; }

bool Socio::validarPin(int pin) const { return pin == _pinIngreso; }
