#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include "usuario.h"
#include "turno.h"
#include "tipoContrato.h"

class Empleado : public Usuario {

private:
    int _legajo;
    Turno _turno;
    TipoContrato _tipoContrato;

public:

    Empleado();
    Empleado(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
             int legajo, Turno turno, TipoContrato tipoContrato);

    int getLegajo() const;
    Turno getTurno() const;
    TipoContrato getTipoContrato() const;

    void setLegajo(int legajo);
    void setTurno(Turno turno);
    void setTipoContrato(TipoContrato tipoContrato);
};

#endif
