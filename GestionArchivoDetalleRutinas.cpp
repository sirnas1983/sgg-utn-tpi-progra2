#include "GestionArchivoDetalleRutinas.h"
#include "detalleRutina.h"

GestionArchivoDetalleRutinas::GestionArchivoDetalleRutinas(std::string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoDetalleRutinas::Guardar(DetalleRutina detalleRutina)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&detalleRutina, sizeof(DetalleRutina), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoDetalleRutinas::Guardar(DetalleRutina detalleRutina, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(DetalleRutina) * posicion, SEEK_SET);
    bool ok = fwrite(&detalleRutina, sizeof(DetalleRutina), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

DetalleRutina GestionArchivoDetalleRutinas::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return DetalleRutina();
    }
    DetalleRutina detalleRutina;
    fseek(pArchivo, sizeof(DetalleRutina) * posicion, SEEK_SET);
    fread(&detalleRutina, sizeof(DetalleRutina), 1, pArchivo);
    fclose(pArchivo);
    return detalleRutina;
}

int GestionArchivoDetalleRutinas::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(DetalleRutina);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoDetalleRutinas::Leer(int cantidadRegistros, DetalleRutina *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(DetalleRutina), 1, pArchivo);
    }
    fclose(pArchivo);
}
