#ifndef SERVICIOSOCIO_H_INCLUDED
#define SERVICIOSOCIO_H_INCLUDED

#include "GestionArchivoSocios.h"
#include "GestionArchivoEntrenadores.h"
#include "GestionArchivoAsistencias.h"
#include "GestionArchivoPagos.h"
#include "GestionArchivoReclamos.h"
#include "GestionArchivoEjercicios.h"
#include "GestionArchivoSocios.h"
#include "GestionArchivoDetalleRutinas.h"
#include "GestionArchivoRutinas.h"

class ServicioSocio
{

private:
    GestionArchivoSocios _archivoSocio;
    GestionArchivoEntrenadores _archivoEntrenador;
    GestionArchivoAsistencias _archivoAsistencia;
    GestionArchivoPagos _archivoPago;
    GestionArchivoReclamos _archivoReclamo;
    GestionArchivoRutinas _archivoRutina;
    GestionArchivoDetalleRutinas _archivoDetalleRutina;
    GestionArchivoEjercicios _archivoEjercicio;

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
