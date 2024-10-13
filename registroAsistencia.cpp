#include "registroAsistencia.h"

RegistroAsistencia::RegistroAsistencia()
    : _idRegistroAsistencia(0), _idUsuario(0), _idActividad(0), _fecha(Fecha()), _horaIngreso(0), _horaSalida(0) {
}

RegistroAsistencia::RegistroAsistencia(int idRegistroAsistencia, int idUsuario, int idActividad, Fecha fecha, int horaIngreso, int horaSalida)
    : _idRegistroAsistencia(idRegistroAsistencia), _idUsuario(idUsuario), _idActividad(idActividad), _fecha(fecha), _horaIngreso(horaIngreso), _horaSalida(horaSalida) {
}

int RegistroAsistencia::getIdRegistroAsistencia() const {
    return _idRegistroAsistencia;
}

int RegistroAsistencia::getIdUsuario() const {
    return _idUsuario;
}

int RegistroAsistencia::getIdActividad() const {
    return _idActividad;
}

Fecha RegistroAsistencia::getFecha() const {
    return _fecha;
}

int RegistroAsistencia::getHoraIngreso() const {
    return _horaIngreso;
}

int RegistroAsistencia::getHoraSalida() const {
    return _horaSalida;
}

void RegistroAsistencia::setIdRegistroAsistencia(int idRegistroAsistencia) {
    _idRegistroAsistencia = idRegistroAsistencia;
}

void RegistroAsistencia::setIdUsuario(int idUsuario) {
    _idUsuario = idUsuario;
}

void RegistroAsistencia::setIdActividad(int idActividad) {
    _idActividad = idActividad;
}

void RegistroAsistencia::setFecha(const Fecha& fecha) {
    _fecha = fecha;
}

void RegistroAsistencia::setHoraIngreso(int horaIngreso) {
    _horaIngreso = horaIngreso;
}

void RegistroAsistencia::setHoraSalida(int horaSalida) {
    _horaSalida = horaSalida;
}
