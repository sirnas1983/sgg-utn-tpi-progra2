#include "rutina.h"

Rutina::Rutina()
{
    _idRutina = 0;
    strcpy(_nombre, "");
    _frecuenciaSem = 0;
    strcpy(_descripcion, "");
    _idEntrenador = 0;
}

Rutina::Rutina(int idRutina, const char* nombre, int frecuenciaSem, const char* descripcion, int idEntrenador)
{
    _idRutina = idRutina;
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';
    _frecuenciaSem = frecuenciaSem;
    strncpy(_descripcion, descripcion, sizeof(_descripcion) - 1);
    _descripcion[sizeof(_descripcion) - 1] = '\0';
    _idEntrenador = idEntrenador;
}

int Rutina::getIdRutina() const
{
    return _idRutina;
}

const char* Rutina::getNombre() const
{
    return _nombre;
}

int Rutina::getFrecuenciaSem() const
{
    return _frecuenciaSem;
}

const char* Rutina::getDescripcion() const
{
    return _descripcion;
}

int Rutina::getIdEntrenador() const
{
    return _idEntrenador;
}

void Rutina::setIdRutina(int idRutina)
{
    _idRutina = idRutina;
}

void Rutina::setNombre(const char* nombre)
{
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';
}

void Rutina::setFrecuenciaSem(int frecuenciaSem)
{
    _frecuenciaSem = frecuenciaSem;
}

void Rutina::setDescripcion(const char* descripcion)
{
    strncpy(_descripcion, descripcion, sizeof(_descripcion) - 1);
    _descripcion[sizeof(_descripcion) - 1] = '\0';
}

void Rutina::setIdEntrenador(int idEntrenador)
{
    _idEntrenador = idEntrenador;
}
