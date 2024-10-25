#include "gestionArchivoEmpleados.h"

GestionArchivoEmpleado::GestionArchivoEmpleado(std::string nombreArchivo) {
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoEmpleado::guardar(Empleado empleado) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL) {
        return false;
    }
    bool ok = fwrite(&empleado, sizeof(Empleado), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoEmpleado::guardar(Empleado empleado, int posicion) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL) {
        return false;
    }
    fseek(pArchivo, sizeof(Empleado) * posicion, SEEK_SET);
    bool ok = fwrite(&empleado, sizeof(Empleado), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoEmpleado::buscarId(int IdUsuario) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return -1;
    }
    Empleado empleado;
    int i = 0;
    while (fread(&empleado, sizeof(Empleado), 1, pArchivo)) {
        if (empleado.getIdUsuario() == IdUsuario) {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

int GestionArchivoEmpleado::buscarDni(int dni) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return -1;
    }
    Empleado empleado;
    int i = 0;
    while (fread(&empleado, sizeof(Empleado), 1, pArchivo)) {
        if (empleado.getDni() == dni) {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

Empleado GestionArchivoEmpleado::leer(int posicion) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return Empleado();
    }
    Empleado empleado;
    fseek(pArchivo, sizeof(Empleado) * posicion, SEEK_SET);
    fread(&empleado, sizeof(Empleado), 1, pArchivo);
    fclose(pArchivo);
    return empleado;
}

int GestionArchivoEmpleado::cantidadRegistros() {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(Empleado);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoEmpleado::leer(int cantidadRegistros, Empleado* vect) {
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL) {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++) {
        fread(&vect[i], sizeof(Empleado), 1, pArchivo);
    }
    fclose(pArchivo);
}
