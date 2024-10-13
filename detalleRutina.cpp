#include "detalleRutina.h"

DetalleRutina::DetalleRutina()
    : _idEjercicio(0), _idRutina(0), _peso(0.0f), _repeticiones(0), _cantSeries(0) {}

DetalleRutina::DetalleRutina(int idEjercicio, int idRutina, float peso, int repeticiones, int cantSeries)
    : _idEjercicio(idEjercicio), _idRutina(idRutina), _peso(peso), _repeticiones(repeticiones), _cantSeries(cantSeries) {}

int DetalleRutina::getIdEjercicio() const {
    return _idEjercicio;
}

int DetalleRutina::getIdRutina() const {
    return _idRutina;
}

float DetalleRutina::getPeso() const {
    return _peso;
}

int DetalleRutina::getRepeticiones() const {
    return _repeticiones;
}

int DetalleRutina::getCantSeries() const {
    return _cantSeries;
}

void DetalleRutina::setIdEjercicio(int idEjercicio) {
    _idEjercicio = idEjercicio;
}

void DetalleRutina::setIdRutina(int idRutina) {
    _idRutina = idRutina;
}

void DetalleRutina::setPeso(float peso) {
    _peso = peso;
}

void DetalleRutina::setRepeticiones(int repeticiones) {
    _repeticiones = repeticiones;
}

void DetalleRutina::setCantSeries(int cantSeries) {
    _cantSeries = cantSeries;
}
