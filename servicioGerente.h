#ifndef SERVICIOGERENTE_H
#define SERVICIOGERENTE_H

#include "gestorArchivosSocios.h"
#include "gestorArchivosGerentes.h"
#include "gestorArchivosEntrenadores.h"
#include "gestorArchivosReclamos.h"
#include "gestorArchivosPagos.h"

class ServicioGerente {

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
    ServicioGerente(GestionArchivoSocios archivoSocio, GestionArchivoEntrenadores archivoEntrenador,
                       GestionArchivoAsistencias archivoAsistencia, GestionArchivoPagos archivoPago,
                       GestionArchivoReclamos archivoReclamo, GestionArchivoRutinas archivoRutina,
                       GestionArchivoDetalleRutinas archivoDetalleRutina, GestionArchivoEjercicios archivoEjercicio);


    // Metodos de Gestión de Socios
    void modificarContrasenia(int idGte);
    void verSocios();
    void agregarSocio();
    void modificarSocio(int idSocio);

    // Metodos de Gestión de Gerentes
    void verGerentes();
    void agregarGerente();
    void modificarGerente(int idGerente);

    // Metodos de Gestión de Entrenadores
    void verEntrenadores();
    void modificarEntrenador(int idEntrenador);
    void agregarEntrenador();

    // Metodos de Gestión de Reclamos
    void verReclamos();
    void verReclamo(int idReclamo);
    void cambiarEstadoReclamo(int idReclamo);

    // Metodos de Gestión de Pagos y Horarios
    void verRegistroPagos();
    void verHorarios();
    void liquidarSueldosEntrenadores();
    void verIngresosMensuales();
    void verIngresosAnuales();
    void etadisticas();
};

#endif // SERVICIOGERENTE_H
