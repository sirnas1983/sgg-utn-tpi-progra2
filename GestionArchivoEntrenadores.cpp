#include "GestionArchivoEntrenadores.h"
#include "entrenador.h"

GestionArchivoEntrenadores::GestionArchivoEntrenadores(std::string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoEntrenadores::Guardar(Entrenador entrenador)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&entrenador, sizeof(Entrenador), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoEntrenadores::Guardar(Entrenador entrenador, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(Entrenador) * posicion, SEEK_SET);
    bool ok = fwrite(&entrenador, sizeof(Entrenador), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoEntrenadores::Buscar(int IDEntrenador)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return -1;
    }
    Entrenador entrenador;
    int i = 0;
    while (fread(&entrenador, sizeof(Entrenador), 1, pArchivo))
    {
        if (entrenador.getIdUsuario() == IDEntrenador)
        {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

Entrenador GestionArchivoEntrenadores::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return Entrenador();
    }
    Entrenador entrenador;
    fseek(pArchivo, sizeof(Entrenador) * posicion, SEEK_SET);
    fread(&entrenador, sizeof(Entrenador), 1, pArchivo);
    fclose(pArchivo);
    return entrenador;
}

int GestionArchivoEntrenadores::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(Entrenador);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoEntrenadores::Leer(int cantidadRegistros, Entrenador *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(Entrenador), 1, pArchivo);
    }
    fclose(pArchivo);
}
