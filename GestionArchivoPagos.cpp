#include "GestionArchivoPagos.h"
#include "registroPago.h"

GestionArchivoPagos::GestionArchivoPagos(std::string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoPagos::Guardar(RegistroPago pago)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&pago, sizeof(RegistroPago), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoPagos::Guardar(RegistroPago pago, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(RegistroPago) * posicion, SEEK_SET);
    bool ok = fwrite(&pago, sizeof(RegistroPago), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoPagos::Buscar(int IDPago)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return -1;
    }
    RegistroPago pago;
    int i = 0;
    while (fread(&pago, sizeof(RegistroPago), 1, pArchivo))
    {
        if (pago.getIdRegistroPago() == IDPago)
        {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

RegistroPago GestionArchivoPagos::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return RegistroPago();
    }
    RegistroPago pago;
    fseek(pArchivo, sizeof(RegistroPago) * posicion, SEEK_SET);
    fread(&pago, sizeof(RegistroPago), 1, pArchivo);
    fclose(pArchivo);
    return pago;
}

int GestionArchivoPagos::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(RegistroPago);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoPagos::Leer(int cantidadRegistros, RegistroPago *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(RegistroPago), 1, pArchivo);
    }
    fclose(pArchivo);
}
