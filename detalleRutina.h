#ifndef DETALLERUTINA_H_INCLUDED
#define DETALLERUTINA_H_INCLUDED

class DetalleRutina
{
private:
    int _idEjercicio;
    int _idRutina;
    float _peso;
    int _repeticiones;
    int _cantSeries;

public:
    DetalleRutina();
    DetalleRutina(int idEjercicio, int idRutina, float peso, int repeticiones, int cantSeries); // Constructor con parámetros

    int getIdEjercicio() const;
    int getIdRutina() const;
    float getPeso() const;
    int getRepeticiones() const;
    int getCantSeries() const;

    void setIdEjercicio(int idEjercicio);
    void setIdRutina(int idRutina);
    void setPeso(float peso);
    void setRepeticiones(int repeticiones);
    void setCantSeries(int cantSeries);
};

#endif // DETALLERUTINA_H_INCLUDED

