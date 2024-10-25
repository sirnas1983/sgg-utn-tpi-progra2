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
    // Constructores
    Socio();
    Socio(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaNacimiento, Fecha fechaIngreso, const char* pass, Rol rol, bool estaHabilitado,
          Membresia membresia, const char* estadoFisico, int idRutina, int idEntrenadorAsignado, int pinIngreso);

    // Getters
    Membresia getMembresia() const;
    const char* getEstadoFisico() const;
    int getIdRutina() const;
    int getIdEntrenadorAsignado() const;
    int getPinIngreso() const;

    // Setters
    void setMembresia(Membresia membresia);
    void setEstadoFisico(const char* estadoFisico);
    void setIdRutina(int idRutina);
    void setIdEntrenadorAsignado(int idEntrenadorAsignado);
    void setPinIngreso(int pinIngreso);

    // Métodos adicionales
    bool validarPin(int pin) const;
};

#endif // SOCIO_H_INCLUDED
