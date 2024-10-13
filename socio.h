#ifndef SOCIO_H_INCLUDED
#define SOCIO_H_INCLUDED
#include "membresia.h"
#include "usuario.h"

class Socio : public Usuario
{
private:
    Membresia _membresia;
    char _estadoFisico[100];
    int _idRutina;
    int _idEntrenadorAsignado;
    int _pinIngreso;

public:
    Socio();
    Socio(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
          Membresia membresia, const char* estadoFisico, int idRutina, int idEntrenadorAsignado, int pinIngreso);

    Membresia getMembresia() const;
    void setMembresia(Membresia membresia);

    const char* getEstadoFisico() const;
    void setEstadoFisico(const char* estadoFisico);

    int getIdRutina() const;
    void setIdRutina(int idRutina);

    int getIdEntrenadorAsignado() const;
    void setIdEntrenadorAsignado(int idEntrenadorAsignado);

    int getPinIngreso() const;
    void setPinIngreso(int pinIngreso);

    bool validarPin(int pin);
};

#endif
