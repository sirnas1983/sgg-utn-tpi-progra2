#include "GestionArchivoReclamos.h"
#include "reclamo.h"

GestionArchivoReclamos::GestionArchivoReclamos(std::string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoReclamos::Guardar(Reclamo reclamo)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&reclamo, sizeof(Reclamo), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoReclamos::Guardar(Reclamo reclamo, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(Reclamo) * posicion, SEEK_SET);
    bool ok = fwrite(&reclamo, sizeof(Reclamo), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoReclamos::Buscar(int IDReclamo)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return -1;
    }
    Reclamo reclamo;
    int i = 0;
    while (fread(&reclamo, sizeof(Reclamo), 1, pArchivo))
    {
        if (reclamo.getIdReclamo() == IDReclamo)
        {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

Reclamo GestionArchivoReclamos::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return Reclamo();
    }
    Reclamo reclamo;
    fseek(pArchivo, sizeof(Reclamo) * posicion, SEEK_SET);
    fread(&reclamo, sizeof(Reclamo), 1, pArchivo);
    fclose(pArchivo);
    return reclamo;
}

int GestionArchivoReclamos::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(Reclamo);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoReclamos::Leer(int cantidadRegistros, Reclamo *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(Reclamo), 1, pArchivo);
    }
    fclose(pArchivo);
}
