#include "ServicioEntrenador.h"

// Constructor
ServicioEntrenador::ServicioEntrenador(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                                         GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                                         GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                                         GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio)
    : _archivoSocio(archivoSocio), _archivoEntrenador(archivoEntrenador), _archivoAsistencia(archivoAsistencia),
      _archivoPago(archivoPago), _archivoReclamo(archivoReclamo), _archivoRutina(archivoRutina),
      _archivoDetalleRutina(archivoDetalleRutina), _archivoEjercicio(archivoEjercicio) {}

// Metodos relacionados con la gestión de socios
void ServicioEntrenador::asignarRutina(int idSocio, int idEntrenador) {
    // Implementación pendiente
}

void ServicioEntrenador::verSociosAsignados(int idEntrenador) {
    // Implementación pendiente
}

void ServicioEntrenador::iniciarReclamo(int idSocio) {
    // Implementación pendiente
}

// Metodos relacionados con ejercicios
void ServicioEntrenador::verEjercicios() {
    // Implementación pendiente
}

void ServicioEntrenador::modificarEjercicio() {
    // Implementación pendiente
}

void ServicioEntrenador::crearEjercicio() {
    // Implementación pendiente
}

// Metodos relacionados con rutinas
void ServicioEntrenador::verRutinas(int idEntrenador) {
    // Implementación pendiente
}

void ServicioEntrenador::modificarRutina(int idEntrenador) {
    // Implementación pendiente
}

void ServicioEntrenador::crearRutina(int idEntrenador) {
    // Implementación pendiente
}

// Metodos relacionados con la gestión de asistencia
void ServicioEntrenador::registrarAsistencia(int idEntrenador) {
    // Implementación pendiente
}

// Metodos relacionados con la gestión de pagos
void ServicioEntrenador::verCobros(int idEntrenador) {
    // Implementación pendiente
}

// Metodos relacionados con reclamos
void ServicioEntrenador::verReclamos(int idEntrenador) {
    // Implementación pendiente
}

// Metodos relacionados con horarios
void ServicioEntrenador::verHorarios() {
    // Implementación pendiente
}

void ServicioEntrenador::verHorariosAsociados(int idEntrenador) {
    // Implementación pendiente
}

// Metodos relacionados con la cuenta del entrenador
void ServicioEntrenador::modificarContrasenia(int idEntrenador) {
    // Implementación pendiente
}
