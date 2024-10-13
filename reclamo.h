#ifndef RECLAMOS_H_INCLUDED
#define RECLAMOS_H_INCLUDED
#include "fecha.h"

class Reclamo {
private:
    int _idReclamo;
    int _idUsuario;
    Fecha _fecha;
    bool _estaResuelto;
    char _titulo[50];
    char _reclamo[200];

public:
    Reclamo();
    Reclamo(int idReclamo, int idUsuario, const Fecha& fecha, bool estaResuelto, const char* titulo, const char* reclamo);

    int getIdReclamo() const;
    int getIdUsuario() const;
    Fecha getFecha() const;
    bool getEstaResuelto() const;
    const char* getTitulo() const;
    const char* getReclamo() const;

    void setIdReclamo(int idReclamo);
    void setIdUsuario(int idUsuario);
    void setFecha(const Fecha& fecha);
    void setEstaResuelto(bool estaResuelto);
    void setTitulo(const char* titulo);
    void setReclamo(const char* reclamo);
};

#endif // RECLAMOS_H_INCLUDED
