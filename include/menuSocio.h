#ifndef MENUSOCIO_H_INCLUDED
#define MENUSOCIO_H_INCLUDED

#include "usuarioAutenticado.h"

class MenuSocio {
    private:
        UsuarioAutenticado* _usuario;

    public:
        MenuSocio(UsuarioAutenticado* usuario);
        void mostrarMenu();

        void verEntrenadorDesignado();
        void verMiRutina();
        void cambiarMembresia();
        void realizarPago();
        void consultarHorarios();
        void presentarReclamo();
        void modificarContrasena();
};

#endif // MENUSOCIO_H_INCLUDED
