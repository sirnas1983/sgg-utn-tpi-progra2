#ifndef REGISTROASISTENCIA_H_INCLUDED
#define REGISTROASISTENCIA_H_INCLUDED

#include "fecha.h"

class RegistroAsistencia
{
private:
    int _idRegistroAsistencia;
    int _idUsuario;
    int _idActividad;
    Fecha _fecha;

public:
    RegistroAsistencia();
    RegistroAsistencia(int idRegistroAsistencia, int idUsuario, int idActividad, const Fecha& fecha);

    int getIdRegistroAsistencia() const;
    int getIdUsuario() const;
    int getIdActividad() const;
    Fecha getFecha() const;

    void setIdRegistroAsistencia(int idRegistroAsistencia);
    void setIdUsuario(int idUsuario);
    void setIdActividad(int idActividad);
    void setFecha(const Fecha& fecha);
};

#endif // REGISTROASISTENCIA_H_INCLUDED
