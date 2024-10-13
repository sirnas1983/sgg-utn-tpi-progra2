#include "actividad.h"
#include <cstring>

Actividad::Actividad()
{
    _idActividad = 0;
    strcpy(_nombre, "");
}

Actividad::Actividad(int idActividad, char* nombre)
{
    _idActividad = idActividad;
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';
}

int Actividad::getIdActividad()
{
    return _idActividad;
}

char* Actividad::getNombre()
{
    return _nombre;
}

void Actividad::setIdActividad(int idActividad)
{
    _idActividad = idActividad;
}

void Actividad::setNombre(char* nombre)
{
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre[sizeof(_nombre) - 1] = '\0';
}
