#include "GestionArchivoSocios.h"

GestionArchivoSocios::GestionArchivoSocios(std::string nombreArchivo) {
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoSocios::Guardar(Socio socio) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL) {
        return false;
    }
    bool ok = fwrite(&socio, sizeof(Socio), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoSocios::Guardar(Socio socio, int posicion) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL) {
        return false;
    }
    fseek(pArchivo, sizeof(Socio) * posicion, SEEK_SET);
    bool ok = fwrite(&socio, sizeof(Socio), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoSocios::Buscar(int IDSocio) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return -1;
    }
    Socio socio;
    int i = 0;
    while (fread(&socio, sizeof(Socio), 1, pArchivo)) {
        if (socio.getIdUsuario() == IDSocio) {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

Socio GestionArchivoSocios::Leer(int posicion) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return Socio();
    }
    Socio socio;
    fseek(pArchivo, sizeof(Socio) * posicion, SEEK_SET);
    fread(&socio, sizeof(Socio), 1, pArchivo);
    fclose(pArchivo);
    return socio;
}

int GestionArchivoSocios::CantidadRegistros() {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(Socio);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoSocios::Leer(int cantidadRegistros, Socio *vector) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++) {
        fread(&vector[i], sizeof(Socio), 1, pArchivo);
    }
    fclose(pArchivo);
}
