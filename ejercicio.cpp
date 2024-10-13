#include "ejercicio.h"
#include <cstring>

Ejercicio::Ejercicio()
    : _idEjercicio(0)
{
    strcpy(_nombre, "");
    strcpy(_descripcion, "");
}

Ejercicio::Ejercicio(int idEjercicio, const char* nombre, const char* descripcion)
    : _idEjercicio(idEjercicio)
{
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';
    strncpy(_descripcion, descripcion, sizeof(_descripcion) - 1);
    _descripcion[sizeof(_descripcion) - 1] = '\0';
}

int Ejercicio::getIdEjercicio() const
{
    return _idEjercicio;
}

const char* Ejercicio::getNombre() const
{
    return _nombre;
}

const char* Ejercicio::getDescripcion() const
{
    return _descripcion;
}


void Ejercicio::setIdEjercicio(int idEjercicio)
{
    _idEjercicio = idEjercicio;
}

void Ejercicio::setNombre(const char* nombre)
{
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';
}

void Ejercicio::setDescripcion(const char* descripcion)
{
    strncpy(_descripcion, descripcion, sizeof(_descripcion) - 1);
    _descripcion[sizeof(_descripcion) - 1] = '\0';
}
