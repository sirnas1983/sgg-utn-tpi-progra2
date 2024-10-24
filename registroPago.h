#ifndef REGISTROPAGO_H_INCLUDED
#define REGISTROPAGO_H_INCLUDED

#include "fecha.h"

class RegistroPago
{
private:
    int _idRegistroPago;  // Identificador del registro de pago
    int _idUsuario;       // Identificador del usuario que realiz� el pago
    Fecha _fechaPago;     // Fecha en que se realiz� el pago
    float _monto;         // Monto del pago
    Fecha _periodo;       // Primer d�a del mes correspondiente al per�odo

public:
    RegistroPago();  // Constructor por defecto
    RegistroPago(int idRegistroPago, int idUsuario, float monto, const Fecha& fechaPago, const Fecha& periodo); // Constructor con par�metros

    int getIdRegistroPago() const;  // Getter para _idRegistroPago
    int getIdUsuario() const;        // Getter para _idUsuario
    float getMonto() const;          // Getter para _monto
    Fecha getFechaPago() const;      // Getter para _fechaPago
    Fecha getPeriodo() const;        // Getter para _periodo

    void setIdRegistroPago(int idRegistroPago);  // Setter para _idRegistroPago
    void setIdUsuario(int idUsuario);            // Setter para _idUsuario
    void setFechaPago(const Fecha& fechaPago);   // Setter para _fechaPago
    void setMonto(float monto);                   // Setter para _monto
    void setPeriodo(const Fecha& periodo);        // Setter para _periodo
};

#endif // REGISTROPAGO_H_INCLUDED
