#include "ServicioSocio.h"

// Constructor
ServicioSocio::ServicioSocio(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                             GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                             GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                             GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio)
    : _archivoSocio(archivoSocio), _archivoEntrenador(archivoEntrenador), _archivoAsistencia(archivoAsistencia),
      _archivoPago(archivoPago), _archivoReclamo(archivoReclamo), _archivoRutina(archivoRutina),
      _archivoDetalleRutina(archivoDetalleRutina), _archivoEjercicio(archivoEjercicio) {}

// M�todos de gesti�n para Socio
void ServicioSocio::modificarContrasenia(int idSocio) {
    // Implementaci�n pendiente
}

void ServicioSocio::registrarPago(int idSocio) {
    // Implementaci�n pendiente
}

void ServicioSocio::registrarAsistencia(int idSocio) {
    // Implementaci�n pendiente
}

void ServicioSocio::iniciarReclamo(int idSocio) {
    // Implementaci�n pendiente
}

void ServicioSocio::verReclamos(int idSocio) {
    // Implementaci�n pendiente
}

void ServicioSocio::verRutina(int idSocio) {
    // Implementaci�n pendiente
}

void ServicioSocio::verEntrenadorAsignado(int idSocio) {
    // Implementaci�n pendiente
}

void ServicioSocio::verHorarios() {
    // Implementaci�n pendiente
}
