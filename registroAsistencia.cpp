#include "registroAsistencia.h"

RegistroAsistencia::RegistroAsistencia()
    : _idRegistroAsistencia(0), _idUsuario(0), _idActividad(0), _fecha() // Utiliza constructor por defecto de Fecha
{
}

RegistroAsistencia::RegistroAsistencia(int idRegistroAsistencia, int idUsuario, int idActividad, const Fecha& fecha)
    : _idRegistroAsistencia(idRegistroAsistencia), _idUsuario(idUsuario), _idActividad(idActividad), _fecha(fecha)
{
}

int RegistroAsistencia::getIdRegistroAsistencia() const
{
    return _idRegistroAsistencia;
}

int RegistroAsistencia::getIdUsuario() const
{
    return _idUsuario;
}

int RegistroAsistencia::getIdActividad() const
{
    return _idActividad;
}

Fecha RegistroAsistencia::getFecha() const
{
    return _fecha;
}

void RegistroAsistencia::setIdRegistroAsistencia(int idRegistroAsistencia)
{
    _idRegistroAsistencia = idRegistroAsistencia; // Considera validar si es negativo
}

void RegistroAsistencia::setIdUsuario(int idUsuario)
{
    _idUsuario = idUsuario; // Considera validar si es negativo
}

void RegistroAsistencia::setIdActividad(int idActividad)
{
    _idActividad = idActividad; // Considera validar si es negativo
}

void RegistroAsistencia::setFecha(const Fecha& fecha)
{
    _fecha = fecha;
}
