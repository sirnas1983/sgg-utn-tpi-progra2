#ifndef REGISTROPAGO_H_INCLUDED
#define REGISTROPAGO_H_INCLUDED
#include "tipoRegistro.h"
#include "fecha.h"

class RegistroPago {
private:
    int _idRegistroPago;
    int _idUsuario;
    float _monto;
    Fecha _periodo; // Aquí se debe almacenar el primer día del mes correspondiente al período
    TipoRegistro _tipoRegistro;

public:
    RegistroPago();
    RegistroPago(int idRegistroPago, int idUsuario, float monto, Fecha periodo, TipoRegistro tipoRegistro);

    int getIdRegistroPago() const;
    int getIdUsuario() const;
    float getMonto() const;
    Fecha getPeriodo() const;
    TipoRegistro getTipoRegistro() const;

    void setIdRegistroPago(int idRegistroPago);
    void setIdUsuario(int idUsuario);
    void setMonto(float monto);
    void setPeriodo(const Fecha& periodo);
    void setTipoRegistro(TipoRegistro tipoRegistro);
};

#endif // REGISTROPAGO_H_INCLUDED
