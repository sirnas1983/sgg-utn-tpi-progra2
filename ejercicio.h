#ifndef EJERCICIO_H_INCLUDED
#define EJERCICIO_H_INCLUDED

class Ejercicio {
private:
    int _idEjercicio;
    char _nombre[30];
    char _descripcion[150];

public:
    Ejercicio();
    Ejercicio(int idEjercicio, const char* nombre, const char* descripcion);

    int getIdEjercicio() const;
    const char* getNombre() const;
    const char* getDescripcion() const;

    void setIdEjercicio(int idEjercicio);
    void setNombre(const char* nombre);
    void setDescripcion(const char* descripcion);
};

#endif // EJERCICIO_H_INCLUDED

