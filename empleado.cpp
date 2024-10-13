#include "empleado.h"

Empleado::Empleado() : Usuario()
{
    _legajo = 0;
    _turno = Turno::MANIANA;
    _tipoContrato = TipoContrato::HORARIO;
}

Empleado::Empleado(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
                   int legajo, Turno turno, TipoContrato tipoContrato)
    : Usuario(idUsuario, nombre, apellido, dni, fechaIngreso, pass, rol, fechaNacimiento, estaHabilitado)
{

    _legajo = legajo;
    _turno = turno;
    _tipoContrato = tipoContrato;
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

TipoContrato Empleado::getTipoContrato() const
{
    return _tipoContrato;
}

// Setters
void Empleado::setLegajo(int legajo)
{
    _legajo = legajo;
}

void Empleado::setTurno(Turno turno)
{
    _turno = turno;
}

void Empleado::setTipoContrato(TipoContrato tipoContrato)
{
    _tipoContrato = tipoContrato;
}
