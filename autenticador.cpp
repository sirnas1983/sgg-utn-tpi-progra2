#include "autenticador.h"
#include "usuario.h"
#include <cstring>


UsuarioAutenticado* Autenticador::autenticar(const int dni, const char* pass, const Rol rol) {

    Usuario* usuario = buscarUsuario(dni, pass, rol);

    if (usuario != nullptr && usuario->getEstaHabilitado()) {

        return new UsuarioAutenticado(
            usuario->getIdUsuario(),
            usuario->getNombre(),
            usuario->getApellido(),
            usuario->getDni(),
            usuario->getFechaNacimiento(),
            usuario->getFechaIngreso(),
            usuario->getRol(),
            usuario->getEstaHabilitado()
        );
    }

    return nullptr;
}

Usuario* Autenticador::buscarUsuario(const int dni, const char* pass, const Rol rol){

    // implementar metodos para buscar en archivos segun rol

}
