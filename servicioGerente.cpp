#include "ServicioGerente.h"

// Constructor
ServicioGerente::ServicioGerente(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                                  GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                                  GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                                  GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio)
    : _archivoSocio(archivoSocio), _archivoEntrenador(archivoEntrenador), _archivoAsistencia(archivoAsistencia),
      _archivoPago(archivoPago), _archivoReclamo(archivoReclamo), _archivoRutina(archivoRutina),
      _archivoDetalleRutina(archivoDetalleRutina), _archivoEjercicio(archivoEjercicio) {}

// Metodos de Gesti�n de Socios
void ServicioGerente::modificarContrasenia(int idGte) {
    // Implementaci�n pendiente
}

void ServicioGerente::verSocios() {
    // Implementaci�n pendiente
}

void ServicioGerente::agregarSocio() {
    // Implementaci�n pendiente
}

void ServicioGerente::modificarSocio(int idSocio) {
    // Implementaci�n pendiente
}

// Metodos de Gesti�n de Gerentes
void ServicioGerente::verGerentes() {
    // Implementaci�n pendiente
}

void ServicioGerente::agregarGerente() {
    // Implementaci�n pendiente
}

void ServicioGerente::modificarGerente(int idGerente) {
    // Implementaci�n pendiente
}

// Metodos de Gesti�n de Entrenadores
void ServicioGerente::verEntrenadores() {
    // Implementaci�n pendiente
}

void ServicioGerente::modificarEntrenador(int idEntrenador) {
    // Implementaci�n pendiente
}

void ServicioGerente::agregarEntrenador() {
    // Implementaci�n pendiente
}

// Metodos de Gesti�n de Reclamos
void ServicioGerente::verReclamos() {
    // Implementaci�n pendiente
}

void ServicioGerente::verReclamo(int idReclamo) {
    // Implementaci�n pendiente
}

void ServicioGerente::cambiarEstadoReclamo(int idReclamo) {
    // Implementaci�n pendiente
}

// Metodos de Gesti�n de Pagos y Horarios
void ServicioGerente::verRegistroPagos() {
    // Implementaci�n pendiente
}

void ServicioGerente::verHorarios() {
    // Implementaci�n pendiente
}

void ServicioGerente::liquidarSueldosEntrenadores() {
    // Implementaci�n pendiente
}

void ServicioGerente::verIngresosMensuales() {
    // Implementaci�n pendiente
}

void ServicioGerente::verIngresosAnuales() {
    // Implementaci�n pendiente
}

void ServicioGerente::etadisticas() {
    // Implementaci�n pendiente
}
