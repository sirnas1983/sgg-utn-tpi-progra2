#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <string>

class Fecha{
private:
    int _dia;
    int _mes;
    int _anio;

    static const int dias[12];
    static const int diasBisiestos[12];

    bool esBisiesto(int anio);
    void sumarDia();
    void restarDia();

public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    ~Fecha();
    void agregarDias(int n);
    std::string toString();
    int getDia();
    int getMes();
    int getAnio();
    Fecha operator-(int i);
    int operator- (Fecha& otraFecha);

};

#endif // FECHA_H_INCLUDED
