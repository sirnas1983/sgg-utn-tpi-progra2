#include "ServicioEntrenador.h"

// Constructor
ServicioEntrenador::ServicioEntrenador(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                                         GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                                         GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                                         GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio)
    : _archivoSocio(archivoSocio), _archivoEntrenador(archivoEntrenador), _archivoAsistencia(archivoAsistencia),
      _archivoPago(archivoPago), _archivoReclamo(archivoReclamo), _archivoRutina(archivoRutina),
      _archivoDetalleRutina(archivoDetalleRutina), _archivoEjercicio(archivoEjercicio) {}

// Metodos relacionados con la gesti�n de socios
void ServicioEntrenador::asignarRutina(int idSocio, int idEntrenador) {
    // Implementaci�n pendiente
}

void ServicioEntrenador::verSociosAsignados(int idEntrenador) {
    // Implementaci�n pendiente
}

void ServicioEntrenador::iniciarReclamo(int idSocio) {
    // Implementaci�n pendiente
}

// Metodos relacionados con ejercicios
void ServicioEntrenador::verEjercicios() {
    // Implementaci�n pendiente
}

void ServicioEntrenador::modificarEjercicio() {
    // Implementaci�n pendiente
}

void ServicioEntrenador::crearEjercicio() {
    // Implementaci�n pendiente
}

// Metodos relacionados con rutinas
void ServicioEntrenador::verRutinas(int idEntrenador) {
    // Implementaci�n pendiente
}

void ServicioEntrenador::modificarRutina(int idEntrenador) {
    // Implementaci�n pendiente
}

void ServicioEntrenador::crearRutina(int idEntrenador) {
    // Implementaci�n pendiente
}

// Metodos relacionados con la gesti�n de asistencia
void ServicioEntrenador::registrarAsistencia(int idEntrenador) {
    // Implementaci�n pendiente
}

// Metodos relacionados con la gesti�n de pagos
void ServicioEntrenador::verCobros(int idEntrenador) {
    // Implementaci�n pendiente
}

// Metodos relacionados con reclamos
void ServicioEntrenador::verReclamos(int idEntrenador) {
    // Implementaci�n pendiente
}

// Metodos relacionados con horarios
void ServicioEntrenador::verHorarios() {
    // Implementaci�n pendiente
}

void ServicioEntrenador::verHorariosAsociados(int idEntrenador) {
    // Implementaci�n pendiente
}

// Metodos relacionados con la cuenta del entrenador
void ServicioEntrenador::modificarContrasenia(int idEntrenador) {
    // Implementaci�n pendiente
}
