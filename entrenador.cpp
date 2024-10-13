#include "entrenador.h"

Entrenador::Entrenador() : Empleado() {
    _valorPorHora = 0.0f;
    _idActividadPrincipal = 0;
}

Entrenador::Entrenador(int idUsuario, const char* nombre, const char* apellido, int dni, Fecha fechaIngreso, const char* pass, Rol rol, Fecha fechaNacimiento, bool estaHabilitado,
                       int legajo, Turno turno, TipoContrato tipoContrato, float valorPorHora, int idActividadPrincipal)
                       : Empleado(idUsuario, nombre, apellido, dni, fechaIngreso, pass, rol, fechaNacimiento, estaHabilitado, legajo, turno, tipoContrato) {

    _valorPorHora = valorPorHora;
    _idActividadPrincipal = idActividadPrincipal;
}

// Getters
float Entrenador::getValorPorHora() const {
    return _valorPorHora;
}

int Entrenador::getIdActividadPrincipal() const {
    return _idActividadPrincipal;
}

// Setters
void Entrenador::setValorPorHora(float valorPorHora) {
    _valorPorHora = valorPorHora;
}

void Entrenador::setIdActividadPrincipal(int idActividadPrincipal) {
    _idActividadPrincipal = idActividadPrincipal;
}
