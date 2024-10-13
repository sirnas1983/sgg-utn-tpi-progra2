#include "fecha.h"
#include <iostream>
#include <string>

const int Fecha::dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int Fecha::diasBisiestos[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


Fecha::Fecha(){

    _dia = 1;
    _mes = 1;
    _anio = 2023;

};

Fecha::Fecha(int dia, int mes, int anio) {
    if (mes >= 1 && mes <= 12 && dia >= 1 && dia <= esBisiesto(anio) ? diasBisiestos[mes-1] : dias[mes-1]) {
        _dia = dia;
        _mes = mes;
        _anio = anio;
    } else {
        _dia = 1;
        _mes = 1;
        _anio = 2023;
    }
}

bool Fecha::esBisiesto(int anio) {
    if (anio % 400 == 0) {
        return true;
    } else if (anio % 100 == 0) {
        return false;
    } else if (anio % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

Fecha::~Fecha() {}

int Fecha::getDia(){
    return _dia;
};

int Fecha::getMes(){
    return _mes;
};

int Fecha::getAnio(){
    return _anio;
};

void Fecha::agregarDias(int n){
    if (n < 0){
        for (int i = 0; i < (-n); i ++){
            restarDia();
        }
    }else if (n > 0){
        for (int i = 0; i < n; i ++){
            sumarDia();
        }
    };
};

void Fecha::restarDia(){
    if (_dia != 1){
        _dia --;
    } else {
        if(_mes == 1){
            _dia = 31;
            _mes = 12;
            _anio --;
        } else {
            _mes --;
            _dia = esBisiesto(_anio) ? diasBisiestos[_mes-1] : dias[_mes-1];
        }
    }
}

void Fecha::sumarDia() {
    if (_dia < (esBisiesto(_anio) ? diasBisiestos[_mes - 1] : dias[_mes - 1])) {
        _dia++;
    } else {
        if (_mes == 12) {
            _dia = 1;
            _mes = 1;
            _anio++;
        } else {
            _mes++;
            _dia = 1;
        }
    }
}

Fecha Fecha::operator-(int i) {
    Fecha nuevaFecha = *this;
    nuevaFecha.agregarDias(-i);
    return nuevaFecha;
}

int Fecha::operator-(Fecha& otraFecha){
    auto contarDias = [this](Fecha& fec) -> int {
        int diasTotales = fec._dia;
        int diasMeses = 0;
        for (int i = 0; i < fec._mes - 1; i++) {
            diasMeses += fec.esBisiesto(fec._anio) ? fec.diasBisiestos[i] : fec.dias[i];
        }
        for (int i = 0; i < fec._anio; i++) {
            diasTotales += (esBisiesto(i) ? 366 : 365);
        }
        diasTotales += diasMeses;
        return diasTotales;
    };
    return contarDias(*this) - contarDias(otraFecha) > 0 ? contarDias(*this) - contarDias(otraFecha) : -(contarDias(*this) - contarDias(otraFecha));
}

std::string Fecha::toString() {
    std::string diaStr = (_dia < 10 ? "0" : "") + std::to_string(_dia);
    std::string mesStr = (_mes < 10 ? "0" : "") + std::to_string(_mes);
    std::string anioStr = std::to_string(_anio);

    return diaStr + "/" + mesStr + "/" + anioStr;
}
