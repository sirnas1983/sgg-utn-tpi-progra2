#ifndef USUARIOAUTENTICADO_H_INCLUDED
#define USUARIOAUTENTICADO_H_INCLUDED

#include "rol.h"
#include "fecha.h"

class UsuarioAutenticado {
private:
    int _idUsuario;
    char _nombre[50];
    char _apellido[50];
    int _dni;
    Fecha _fechaNacimiento;
    Fecha _fechaIngreso;
    Rol _rol;
    bool _estaHabilitado;

public:
    // Constructor
    UsuarioAutenticado(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaNacimiento, Fecha fechaIngreso, Rol rol, bool estaHabilitado);

    // Getters
    int getIdUsuario() const;
    const char* getNombre() const;
    const char* getApellido() const;
    int getDni() const;
    Fecha getFechaNacimiento() const;
    Fecha getFechaIngreso() const;
    Rol getRol() const;
    bool estaHabilitado() const;
};

#endif // USUARIOAUTENTICADO_H_INCLUDED
