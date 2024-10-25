#include "empleado.h"
#include "turno.h"

// Constructor por defecto
Empleado::Empleado()
    : Usuario(), _legajo(0), _turno(Turno::MANIANA), _actividadPrincipal(){
}

// Constructor con parámetros
Empleado::Empleado(const char* nombre, const char* apellido, int dni, int idUsuario, Fecha fechaNacimiento, Fecha fechaIngreso, const char* pass, bool estaHabilitado, Rol rol,
                   int legajo, Turno turno, const Actividad& actividadPrincipal)
    : Usuario(idUsuario, nombre, apellido, dni, fechaNacimiento, fechaIngreso, pass, rol, estaHabilitado),
      _legajo(legajo), _turno(turno), _actividadPrincipal(actividadPrincipal)
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
    if (legajo >= 0) // Validación de legajo
    {
        _legajo = legajo;
    }
}

void Empleado::setTurno(Turno turno)
{
    _turno = turno; // Aquí podrías agregar validación según sea necesario
}

void Empleado::setActividadPrincipal(const Actividad& actividad)
{
    _actividadPrincipal = actividad;
}
