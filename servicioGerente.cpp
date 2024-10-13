#include "ServicioGerente.h"

// Constructor
ServicioGerente::ServicioGerente(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                                  GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                                  GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                                  GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio)
    : _archivoSocio(archivoSocio), _archivoEntrenador(archivoEntrenador), _archivoAsistencia(archivoAsistencia),
      _archivoPago(archivoPago), _archivoReclamo(archivoReclamo), _archivoRutina(archivoRutina),
      _archivoDetalleRutina(archivoDetalleRutina), _archivoEjercicio(archivoEjercicio) {}

// Metodos de Gestión de Socios
void ServicioGerente::modificarContrasenia(int idGte) {
    // Implementación pendiente
}

void ServicioGerente::verSocios() {
    // Implementación pendiente
}

void ServicioGerente::agregarSocio() {
    // Implementación pendiente
}

void ServicioGerente::modificarSocio(int idSocio) {
    // Implementación pendiente
}

// Metodos de Gestión de Gerentes
void ServicioGerente::verGerentes() {
    // Implementación pendiente
}

void ServicioGerente::agregarGerente() {
    // Implementación pendiente
}

void ServicioGerente::modificarGerente(int idGerente) {
    // Implementación pendiente
}

// Metodos de Gestión de Entrenadores
void ServicioGerente::verEntrenadores() {
    // Implementación pendiente
}

void ServicioGerente::modificarEntrenador(int idEntrenador) {
    // Implementación pendiente
}

void ServicioGerente::agregarEntrenador() {
    // Implementación pendiente
}

// Metodos de Gestión de Reclamos
void ServicioGerente::verReclamos() {
    // Implementación pendiente
}

void ServicioGerente::verReclamo(int idReclamo) {
    // Implementación pendiente
}

void ServicioGerente::cambiarEstadoReclamo(int idReclamo) {
    // Implementación pendiente
}

// Metodos de Gestión de Pagos y Horarios
void ServicioGerente::verRegistroPagos() {
    // Implementación pendiente
}

void ServicioGerente::verHorarios() {
    // Implementación pendiente
}

void ServicioGerente::liquidarSueldosEntrenadores() {
    // Implementación pendiente
}

void ServicioGerente::verIngresosMensuales() {
    // Implementación pendiente
}

void ServicioGerente::verIngresosAnuales() {
    // Implementación pendiente
}

void ServicioGerente::etadisticas() {
    // Implementación pendiente
}
