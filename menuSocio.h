#ifndef MENUSOCIO_H_INCLUDED
#define MENUSOCIO_H_INCLUDED

#include "usuarioAutenticado.h"

class MenuSocio {
    private:
        UsuarioAutenticado _usuario;

    public:
        MenuSocio(const UsuarioAutenticado& usuario);
        void mostrarMenu();

        void modificarDatosPersonales();
        void verEntrenadorDesignado();
        void verEstadoContable();
        void miRutina();
        void cambiarMembresia();
        void realizarPago();
        void consultarHorarios();
        void presentarReclamo();
        void modificarContrasena();
};

#endif // MENUSOCIO_H_INCLUDED
