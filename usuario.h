#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED
#include "rol.h"
#include "fecha.h"

class Usuario
{

protected:
    int _idUsuario;
    char _nombre[50];
    char _apellido[50];
    int _dni;
    Fecha _fechaIngreso;
    char _pass[20];
    Rol _rol;
    Fecha _fechaNacimiento;
    bool _estaHabilitado;

public:
    Usuario();
    Usuario(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado);

    int getIdUsuario() const;
    const char* getNombre() const;
    const char* getApellido() const;
    int getDni() const;
    Fecha getFechaIngreso() const;
    const char* getPass() const;
    Rol getRol() const;
    Fecha getFechaNacimiento() const;
    bool getEstaHabilitado() const;
    bool validarContrasenia(const char* pass);

    void setIdUsuario(int idUsuario);
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setDni(int dni);
    void setFechaIngreso(Fecha fechaIngreso);
    void setPass(const char* pass);
    void setRol(Rol rol);
    void setFechaNacimiento(Fecha fechaNacimiento);
    void setEstaHabilitado(bool estaHabilitado);
};

#endif
