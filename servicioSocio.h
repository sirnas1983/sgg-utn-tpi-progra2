#ifndef SERVICIOSOCIO_H_INCLUDED
#define SERVICIOSOCIO_H_INCLUDED

#include "gestionArchivoSocio.h"
#include "gestionArchivoAsistencia.h"
#include "gestionArchivoPago.h"
#include "gestionArchivoReclamo.h"

class ServicioSocio {

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
    ServicioSocio(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                   GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                   GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                   GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio);

    void modificarContrasenia(int idSocio);
    void registrarPago(int idSocio);
    void registrarAsistencia(int idSocio);
    void iniciarReclamo(int idSocio);
    void verReclamos(int idSocio);
    void verRutina(int idSocio);
    void verEntrenadorAsignado(int idSocio);
    void verHorarios();
};

#endif // SERVICIOSOCIO_H_INCLUDED
