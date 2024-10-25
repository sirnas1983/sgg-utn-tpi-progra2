#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include "usuario.h"
#include "actividad.h"
#include "turno.h"

using namespace std;

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
    Empleado(const char* nombre, const char* apellido, int dni, int idUsuario, Fecha fechaNacimiento, Fecha fechaIngreso, const char* pass,  bool estaHabilitado, Rol rol,
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
