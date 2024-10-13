#include "GestionArchivoRutinas.h"
#include "rutina.h"

GestionArchivoRutinas::GestionArchivoRutinas(std::string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoRutinas::Guardar(Rutina rutina)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&rutina, sizeof(Rutina), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoRutinas::Guardar(Rutina rutina, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(Rutina) * posicion, SEEK_SET);
    bool ok = fwrite(&rutina, sizeof(Rutina), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoRutinas::Buscar(int IDRutina)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return -1;
    }
    Rutina rutina;
    int i = 0;
    while (fread(&rutina, sizeof(Rutina), 1, pArchivo))
    {
        if (rutina.getIdRutina() == IDRutina)
        {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

Rutina GestionArchivoRutinas::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return Rutina();
    }
    Rutina rutina;
    fseek(pArchivo, sizeof(Rutina) * posicion, SEEK_SET);
    fread(&rutina, sizeof(Rutina), 1, pArchivo);
    fclose(pArchivo);
    return rutina;
}

int GestionArchivoRutinas::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(Rutina);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoRutinas::Leer(int cantidadRegistros, Rutina *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(Rutina), 1, pArchivo);
    }
    fclose(pArchivo);
}
