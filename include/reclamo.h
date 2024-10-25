#ifndef RECLAMOS_H_INCLUDED
#define RECLAMOS_H_INCLUDED

#include "fecha.h"

class Reclamo
{
private:
    int _idReclamo;
    int _idUsuario;
    Fecha _fecha;
    bool _estaResuelto;
    char _detalle[200];

public:
    Reclamo();
    Reclamo(int idReclamo, int idUsuario, const Fecha& fecha, bool estaResuelto, const char* detalle);

    int getIdReclamo() const;
    int getIdUsuario() const;
    Fecha getFecha() const;
    bool getEstaResuelto() const;
    const char* getDetalle() const;

    void setIdReclamo(int idReclamo);
    void setIdUsuario(int idUsuario);
    void setFecha(const Fecha& fecha);
    void setEstaResuelto(bool estaResuelto);
    void setDetalle(const char* detalle);
};

#endif // RECLAMOS_H_INCLUDED
