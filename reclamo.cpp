#include "reclamo.h"
#include <cstring>

Reclamo::Reclamo()
    : _idReclamo(0), _idUsuario(0), _estaResuelto(false) {
    _fecha = Fecha();
    strcpy(_titulo, "");
    strcpy(_reclamo, "");
}

Reclamo::Reclamo(int idReclamo, int idUsuario, const Fecha& fecha, bool estaResuelto, const char* titulo, const char* reclamo)
    : _idReclamo(idReclamo), _idUsuario(idUsuario), _fecha(fecha), _estaResuelto(estaResuelto) {
    strncpy(_titulo, titulo, sizeof(_titulo) - 1);
    _titulo[sizeof(_titulo) - 1] = '\0';
    strncpy(_reclamo, reclamo, sizeof(_reclamo) - 1);
    _reclamo[sizeof(_reclamo) - 1] = '\0';
}

int Reclamo::getIdReclamo() const {
    return _idReclamo;
}

int Reclamo::getIdUsuario() const {
    return _idUsuario;
}

Fecha Reclamo::getFecha() const {
    return _fecha;
}

bool Reclamo::getEstaResuelto() const {
    return _estaResuelto;
}

const char* Reclamo::getTitulo() const {
    return _titulo;
}

const char* Reclamo::getReclamo() const {
    return _reclamo;
}

void Reclamo::setIdReclamo(int idReclamo) {
    _idReclamo = idReclamo;
}

void Reclamo::setIdUsuario(int idUsuario) {
    _idUsuario = idUsuario;
}

void Reclamo::setFecha(const Fecha& fecha) {
    _fecha = fecha;
}

void Reclamo::setEstaResuelto(bool estaResuelto) {
    _estaResuelto = estaResuelto;
}

void Reclamo::setTitulo(const char* titulo) {
    strncpy(_titulo, titulo, sizeof(_titulo) - 1);
    _titulo[sizeof(_titulo) - 1] = '\0';
}

void Reclamo::setReclamo(const char* reclamo) {
    strncpy(_reclamo, reclamo, sizeof(_reclamo) - 1);
    _reclamo[sizeof(_reclamo) - 1] = '\0';
}
