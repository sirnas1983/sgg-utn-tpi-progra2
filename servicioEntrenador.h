#ifndef SERVICIOENTRENADOR_H
#define SERVICIOENTRENADOR_H

#include "gestionArchivoSocio.h"
#include "gestionArchivoEntrenador.h"
#include "gestionArchivoAsistencia.h"
#include "gestionArchivoPago.h"
#include "gestionArchivoReclamo.h"
#include "gestionArtchivoEjercicio.h"
#include "gestionArchivoDetalleRutina.h"
#include "gestionArchivoRutina.h"


class ServicioEntrenador {

private:
    GestionArchivoSocios _archivoSocio;
    GestionArchivoEntrenadores _archivoEntrenador;
    GestionArchivoAsistencias _archivoAsistencia;
    GestionArchivoPagos _archivoPago;
    GestionArchivoReclamos _archivoReclamo;
    GestionArchivoRutinas _archivoRutina;
    GestionArchivoDetalleRutinas _archivoDetalleRutina;
    GestionArtchivoEjercicios _archivoEjercicio;

public:
    // Constructor
    ServicioEntrenador(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                       GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                       GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                       GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio);


    // Metodos relacionados con la gestión de socios
    void asignarRutina(int idSocio, int idEntrenador);
    void verSociosAsignados(int idEntrenador);
    void iniciarReclamo(int idSocio);

    // Metodos relacionados con ejercicios
    void verEjercicios();
    void modificarEjercicio();
    void crearEjercicio();

    // Metodos relacionados con ejercicios
    void verRutinas(int idEntrenador);
    void modificarRutina(int idEntrenador);
    void crearRutina(int idEntrenador);

    // Metodos relacionados con la gestión de asistencia
    void registrarAsistencia(int idEntrenador);

    // Metodos relacionados con la gestión de pagos
    void verCobros(int idEntrenador);

    // Metodos relacionados con reclamos
    void verReclamos(int idEntrenador);

    // Metodos relacionados con horarios
    void verHorarios();
    void verHorariosAsociados(int idEntrenador);

    // Metodos relacionados con la cuenta del entrenador
    void modificarContrasenia(int idEntrenador);
};

#endif // SERVICIOENTRENADOR_H
