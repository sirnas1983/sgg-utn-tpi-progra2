#include "GestionArchivoPagos.h"
#include "registroPago.h"

GestionArchivoPagos::GestionArchivoPagos(std::string nombreArchivo) : _nombreArchivo(nombreArchivo) {}

bool GestionArchivoPagos::Guardar(RegistroPago pago) {
    // Implementar lógica para guardar pago
    return false;
}

bool GestionArchivoPagos::Guardar(RegistroPago pago, int posicion) {
    // Implementar lógica para guardar pago en una posición específica
    return false;
}

int GestionArchivoPagos::Buscar(int IDPago) {
    // Implementar lógica para buscar pago por ID
    return -1;
}

RegistroPago GestionArchivoPagos::Leer(int posicion) {
    // Implementar lógica para leer un pago en una posición específica
    return RegistroPago();
}

int GestionArchivoPagos::CantidadRegistros() {
    // Implementar lógica para obtener cantidad de registros
    return 0;
}

void GestionArchivoPagos::Leer(int cantidadRegistros, RegistroPago *vector) {
    // Implementar lógica para leer varios registros
}
