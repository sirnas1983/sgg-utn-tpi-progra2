#include "reclamo.h"
#include <cstring>

Reclamo::Reclamo()
    : _idReclamo(0), _idUsuario(0), _estaResuelto(false), _fecha(), _detalle("") // Inicializa directamente _detalle
{
}

Reclamo::Reclamo(int idReclamo, int idUsuario, const Fecha& fecha, bool estaResuelto, const char* detalle)
    : _idReclamo(idReclamo), _idUsuario(idUsuario), _fecha(fecha), _estaResuelto(estaResuelto)
{
    if (detalle) {
        strncpy(_detalle, detalle, sizeof(_detalle) - 1);
        _detalle[sizeof(_detalle) - 1] = '\0';
    } else {
        strcpy(_detalle, ""); // Manejo de puntero nulo
    }
}

int Reclamo::getIdReclamo() const
{
    return _idReclamo;
}

int Reclamo::getIdUsuario() const
{
    return _idUsuario;
}

Fecha Reclamo::getFecha() const
{
    return _fecha;
}

bool Reclamo::getEstaResuelto() const
{
    return _estaResuelto;
}

const char* Reclamo::getDetalle() const
{
    return _detalle;
}

void Reclamo::setIdReclamo(int idReclamo)
{
    _idReclamo = idReclamo; // Considera validar si es negativo
}

void Reclamo::setIdUsuario(int idUsuario)
{
    _idUsuario = idUsuario; // Considera validar si es negativo
}

void Reclamo::setFecha(const Fecha& fecha)
{
    _fecha = fecha;
}

void Reclamo::setEstaResuelto(bool estaResuelto)
{
    _estaResuelto = estaResuelto;
}

void Reclamo::setDetalle(const char* detalle)
{
    if (detalle) {
        strncpy(_detalle, detalle, sizeof(_detalle) - 1);
        _detalle[sizeof(_detalle) - 1] = '\0';
    } else {
        strcpy(_detalle, ""); // Manejo de puntero nulo
    }
}
