#ifndef AUTENTICADOR_H_INCLUDED
#define AUTENTICADOR_H_INCLUDED

#include "usuarioAutenticado.h"
#include "usuario.h"

#include "rol.h"

class Autenticador {
public:
    UsuarioAutenticado autenticar(const int dni, const char* pass);
private:
    Usuario buscarUsuario(const int dni, const char* pass);
};

#endif // AUTENTICADOR_H_INCLUDED
