#include "empleado.h"
#include "turno.h"

// Constructor por defecto
Empleado::Empleado()
    : Usuario(), _legajo(0), _turno(Turno::MANIANA), _actividadPrincipal() // Inicializa actividadPrincipal
{
}

// Constructor con par�metros
Empleado::Empleado(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
                   int legajo, Turno turno, const Actividad& actividadPrincipal)
    : Usuario(idUsuario, nombre, apellido, dni, fechaNacimiento, fechaIngreso, pass, rol, estaHabilitado), // Ajuste aqu�
      _legajo(legajo), _turno(turno), _actividadPrincipal(actividadPrincipal) // Inicializa legajo, turno y actividadPrincipal
{
}

// Getters
int Empleado::getLegajo() const
{
    return _legajo;
}

Turno Empleado::getTurno() const
{
    return _turno;
}

Actividad Empleado::getActividadPrincipal() const
{
    return _actividadPrincipal;
}

// Setters
void Empleado::setLegajo(int legajo)
{
    if (legajo >= 0) // Validaci�n de legajo
    {
        _legajo = legajo;
    }
}

void Empleado::setTurno(Turno turno)
{
    _turno = turno; // Aqu� podr�as agregar validaci�n seg�n sea necesario
}

void Empleado::setActividadPrincipal(const Actividad& actividad)
{
    _actividadPrincipal = actividad;
}
