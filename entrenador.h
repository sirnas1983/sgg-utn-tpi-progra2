#ifndef ENTRENADOR_H_INCLUDED
#define ENTRENADOR_H_INCLUDED

#include "empleado.h"

class Entrenador : public Empleado {
private:
    float _valorPorHora;
    int _idActividadPrincipal;

public:
    Entrenador();

    Entrenador(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
               int legajo, Turno turno, TipoContrato tipoContrato, float valorPorHora, int _idActividadPrincipal);

    float getValorPorHora() const;
    int getIdActividadPrincipal() const;

    void setValorPorHora(float valorPorHora);
    void setIdActividadPrincipal(int idActividadPrincipal);
};

#endif // ENTRENADOR_H_INCLUDED
