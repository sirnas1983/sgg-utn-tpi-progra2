#ifndef ACTIVIDAD_H_INCLUDED
#define ACTIVIDAD_H_INCLUDED

class Actividad
{
private:
    int _idActividad;
    char _nombre[50];
public:
    Actividad();
    Actividad(int idActividad, const char* nombre); // Usar const char*

    int getIdActividad() const; // Método const
    const char* getNombre() const; // Usar const char* y método const
    void setIdActividad(int idActividad);
    void setNombre(const char* nombre); // Usar const char*
};

#endif // ACTIVIDAD_H_INCLUDED
