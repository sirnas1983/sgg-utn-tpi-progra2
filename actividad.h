#ifndef ACTIVIDAD_H_INCLUDED
#define ACTIVIDAD_H_INCLUDED

class Actividad
{
private:
    int _idActividad;
    char _nombre[50];
public:

    Actividad();
    Actividad(int idActividad, char* nombre);

    int getIdActividad();
    char* getNombre();
    void setIdActividad(int idActividad);
    void setNombre(char* nombre);

};

#endif // ACTIVIDAD_H_INCLUDED
