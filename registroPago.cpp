#include "registroPago.h"

// Constructor por defecto
RegistroPago::RegistroPago()
    : _idRegistroPago(0), _idUsuario(0), _fechaPago(), _monto(0.0f), _periodo()
{
}

// Constructor con parámetros
RegistroPago::RegistroPago(int idRegistroPago, int idUsuario, float monto, const Fecha& fechaPago, const Fecha& periodo)
    : _idRegistroPago(idRegistroPago), _idUsuario(idUsuario), _fechaPago(fechaPago), _monto(monto), _periodo(periodo)
{
}


// Getters
int RegistroPago::getIdRegistroPago() const
{
    return _idRegistroPago;
}

int RegistroPago::getIdUsuario() const
{
    return _idUsuario;
}

float RegistroPago::getMonto() const
{
    return _monto;
}

Fecha RegistroPago::getFechaPago() const
{
    return _fechaPago;
}

Fecha RegistroPago::getPeriodo() const
{
    return _periodo;
}

// Setters
void RegistroPago::setIdRegistroPago(int idRegistroPago)
{
    _idRegistroPago = idRegistroPago; // Considera validar si es negativo
}

void RegistroPago::setIdUsuario(int idUsuario)
{
    _idUsuario = idUsuario; // Considera validar si es negativo
}

void RegistroPago::setFechaPago(const Fecha& fechaPago)
{
    _fechaPago = fechaPago;
}

void RegistroPago::setMonto(float monto)
{
    if (monto < 0) {
        // Manejar error: el monto no puede ser negativo
        return;
    }
    _monto = monto;
}

void RegistroPago::setPeriodo(const Fecha& periodo)
{
    _periodo = periodo;
}
