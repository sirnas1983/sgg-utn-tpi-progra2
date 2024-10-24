#include "actividad.h"
#include <cstring>

Actividad::Actividad() : _idActividad(0)
{
    strcpy(_nombre, "");
}

Actividad::Actividad(int idActividad, const char* nombre) : _idActividad(idActividad)
{
    if (nombre) { // Validación de nombre
        strncpy(_nombre, nombre, sizeof(_nombre) - 1);
        _nombre[sizeof(_nombre) - 1] = '\0';
    } else {
        strcpy(_nombre, ""); // Manejo de puntero nulo
    }
}

int Actividad::getIdActividad() const
{
    return _idActividad;
}

const char* Actividad::getNombre() const
{
    return _nombre;
}

void Actividad::setIdActividad(int idActividad)
{
    _idActividad = idActividad;
}

void Actividad::setNombre(const char* nombre)
{
    if (nombre) { // Validación de nombre
        strncpy(_nombre, nombre, sizeof(_nombre) - 1);
        _nombre[sizeof(_nombre) - 1] = '\0';
    }
}
