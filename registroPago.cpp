#include "registroPago.h"
#include <cstring>

RegistroPago::RegistroPago()
    : _idRegistroPago(0), _idUsuario(0), _monto(0.0f), _periodo(Fecha()), _tipoRegistro(TipoRegistro::INGRESO) {}

RegistroPago::RegistroPago(int idRegistroPago, int idUsuario, float monto, Fecha periodo, TipoRegistro tipoRegistro)
    : _idRegistroPago(idRegistroPago), _idUsuario(idUsuario), _monto(monto), _periodo(periodo), _tipoRegistro(tipoRegistro) {}

int RegistroPago::getIdRegistroPago() const {
    return _idRegistroPago;
}

int RegistroPago::getIdUsuario() const {
    return _idUsuario;
}

float RegistroPago::getMonto() const {
    return _monto;
}

Fecha RegistroPago::getPeriodo() const {
    return _periodo;
}

TipoRegistro RegistroPago::getTipoRegistro() const {
    return _tipoRegistro;
}

void RegistroPago::setIdRegistroPago(int idRegistroPago) {
    _idRegistroPago = idRegistroPago;
}

void RegistroPago::setIdUsuario(int idUsuario) {
    _idUsuario = idUsuario;
}

void RegistroPago::setMonto(float monto) {
    _monto = monto;
}

void RegistroPago::setPeriodo(const Fecha& periodo) {
    _periodo = periodo;
}

void RegistroPago::setTipoRegistro(TipoRegistro tipoRegistro) {
    _tipoRegistro = tipoRegistro;
}
