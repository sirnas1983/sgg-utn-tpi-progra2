#include "GestionArchivoRutinas.h"
#include "rutina.h"

GestionArchivoRutinas::GestionArchivoRutinas(std::string nombreArchivo) : _nombreArchivo(nombreArchivo) {}

bool GestionArchivoRutinas::Guardar(Rutina rutina) {
    // Implementar lógica para guardar rutina
    return false;
}

bool GestionArchivoRutinas::Guardar(Rutina rutina, int posicion) {
    // Implementar lógica para guardar rutina en una posición específica
    return false;
}

int GestionArchivoRutinas::Buscar(int IDRutina) {
    // Implementar lógica para buscar rutina por ID
    return -1;
}

Rutina GestionArchivoRutinas::Leer(int posicion) {
    // Implementar lógica para leer una rutina en una posición específica
    return Rutina();
}

int GestionArchivoRutinas::CantidadRegistros() {
    // Implementar lógica para obtener cantidad de registros
    return 0;
}

void GestionArchivoRutinas::Leer(int cantidadRegistros, Rutina *vector) {
    // Implementar lógica para leer varios registros
}
