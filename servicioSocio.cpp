#include "ServicioSocio.h"

// Constructor
ServicioSocio::ServicioSocio(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                             GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                             GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                             GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio)
    : _archivoSocio(archivoSocio), _archivoEntrenador(archivoEntrenador), _archivoAsistencia(archivoAsistencia),
      _archivoPago(archivoPago), _archivoReclamo(archivoReclamo), _archivoRutina(archivoRutina),
      _archivoDetalleRutina(archivoDetalleRutina), _archivoEjercicio(archivoEjercicio) {}

// Métodos de gestión para Socio
void ServicioSocio::modificarContrasenia(int idSocio) {
    // Implementación pendiente
}

void ServicioSocio::registrarPago(int idSocio) {
    // Implementación pendiente
}

void ServicioSocio::registrarAsistencia(int idSocio) {
    // Implementación pendiente
}

void ServicioSocio::iniciarReclamo(int idSocio) {
    // Implementación pendiente
}

void ServicioSocio::verReclamos(int idSocio) {
    // Implementación pendiente
}

void ServicioSocio::verRutina(int idSocio) {
    // Implementación pendiente
}

void ServicioSocio::verEntrenadorAsignado(int idSocio) {
    // Implementación pendiente
}

void ServicioSocio::verHorarios() {
    // Implementación pendiente
}
