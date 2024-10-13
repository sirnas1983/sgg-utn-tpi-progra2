#ifndef RUTINA_H_INCLUDED
#define RUTINA_H_INCLUDED

#include <cstring>

class Rutina {
private:
    int _idRutina;
    char _nombre[50];
    int _frecuenciaSem;
    char _descripcion[150];
    int _idEntrenador;

public:
    Rutina();

    Rutina(int idRutina, const char* nombre, int frecuenciaSem, const char* descripcion, int idEntrenador);

    int getIdRutina() const;
    const char* getNombre() const;
    int getFrecuenciaSem() const;
    const char* getDescripcion() const;
    int getIdEntrenador() const;

    void setIdRutina(int idRutina);
    void setNombre(const char* nombre);
    void setFrecuenciaSem(int frecuenciaSem);
    void setDescripcion(const char* descripcion);
    void setIdEntrenador(int idEntrenador);
};

#endif // RUTINA_H_INCLUDED

