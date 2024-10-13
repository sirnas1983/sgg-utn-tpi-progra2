#include "GestionArchivoEjercicios.h"
#include "ejercicio.h"

GestionArchivoEjercicios::GestionArchivoEjercicios(std::string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoEjercicios::Guardar(Ejercicio ejercicio)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&ejercicio, sizeof(Ejercicio), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoEjercicios::Guardar(Ejercicio ejercicio, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(Ejercicio) * posicion, SEEK_SET);
    bool ok = fwrite(&ejercicio, sizeof(Ejercicio), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoEjercicios::Buscar(int IDEjercicio)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return -1;
    }
    Ejercicio ejercicio;
    int i = 0;
    while (fread(&ejercicio, sizeof(Ejercicio), 1, pArchivo))
    {
        if (ejercicio.getIdEjercicio() == IDEjercicio)
        {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

Ejercicio GestionArchivoEjercicios::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return Ejercicio();
    }
    Ejercicio ejercicio;
    fseek(pArchivo, sizeof(Ejercicio) * posicion, SEEK_SET);
    fread(&ejercicio, sizeof(Ejercicio), 1, pArchivo);
    fclose(pArchivo);
    return ejercicio;
}

int GestionArchivoEjercicios::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(Ejercicio);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoEjercicios::Leer(int cantidadRegistros, Ejercicio *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(Ejercicio), 1, pArchivo);
    }
    fclose(pArchivo);
}
