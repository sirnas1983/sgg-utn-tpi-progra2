#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include "usuario.h"
#include "actividad.h"
#include "turno.h"

class Empleado : public Usuario
{
private:
    int _legajo;
    Turno _turno;
    Actividad _actividadPrincipal;

public:
    // Constructor por defecto
    Empleado();

    // Constructor con parámetros
    Empleado(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
             int legajo, Turno turno, const Actividad& actividadPrincipal);

    // Getters
    int getLegajo() const;
    Turno getTurno() const;
    Actividad getActividadPrincipal() const;

    // Setters
    void setLegajo(int legajo);
    void setTurno(Turno turno);
    void setActividadPrincipal(const Actividad& actividad);
};

#endif
