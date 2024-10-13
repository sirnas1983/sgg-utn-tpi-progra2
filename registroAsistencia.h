#ifndef REGISTROASISTENCIA_H_INCLUDED
#define REGISTROASISTENCIA_H_INCLUDED
#include "fecha.h"

class RegistroAsistencia {
private:
    int _idRegistroAsistencia;
    int _idUsuario;
    int _idActividad;
    Fecha _fecha;
    int _horaIngreso;
    int _horaSalida;

public:
    RegistroAsistencia();
    RegistroAsistencia(int idRegistroAsistencia, int idUsuario, int idActividad, Fecha fecha, int horaIngreso, int horaSalida);

    int getIdRegistroAsistencia() const;
    int getIdUsuario() const;
    int getIdActividad() const;
    Fecha getFecha() const;
    int getHoraIngreso() const;
    int getHoraSalida() const;

    void setIdRegistroAsistencia(int idRegistroAsistencia);
    void setIdUsuario(int idUsuario);
    void setIdActividad(int idActividad);
    void setFecha(const Fecha& fecha);
    void setHoraIngreso(int horaIngreso);
    void setHoraSalida(int horaSalida);
};

#endif // REGISTROASISTENCIA_H_INCLUDED
