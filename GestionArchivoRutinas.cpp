#include "GestionArchivoRutinas.h"
#include "rutina.h"

GestionArchivoRutinas::GestionArchivoRutinas(std::string nombreArchivo) : _nombreArchivo(nombreArchivo) {}

bool GestionArchivoRutinas::Guardar(Rutina rutina) {
    // Implementar l�gica para guardar rutina
    return false;
}

bool GestionArchivoRutinas::Guardar(Rutina rutina, int posicion) {
    // Implementar l�gica para guardar rutina en una posici�n espec�fica
    return false;
}

int GestionArchivoRutinas::Buscar(int IDRutina) {
    // Implementar l�gica para buscar rutina por ID
    return -1;
}

Rutina GestionArchivoRutinas::Leer(int posicion) {
    // Implementar l�gica para leer una rutina en una posici�n espec�fica
    return Rutina();
}

int GestionArchivoRutinas::CantidadRegistros() {
    // Implementar l�gica para obtener cantidad de registros
    return 0;
}

void GestionArchivoRutinas::Leer(int cantidadRegistros, Rutina *vector) {
    // Implementar l�gica para leer varios registros
}
