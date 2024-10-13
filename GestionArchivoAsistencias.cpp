#include "GestionArchivoAsistencias.h"
#include "registroAsistencia.h"

GestionArchivoAsistencias::GestionArchivoAsistencias(std::string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestionArchivoAsistencias::Guardar(RegistroAsistencia asistencia)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if (pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&asistencia, sizeof(RegistroAsistencia), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

bool GestionArchivoAsistencias::Guardar(RegistroAsistencia asistencia, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if (pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(RegistroAsistencia) * posicion, SEEK_SET);
    bool ok = fwrite(&asistencia, sizeof(RegistroAsistencia), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

int GestionArchivoAsistencias::Buscar(int IDAsistencia)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return -1;
    }
    RegistroAsistencia asistencia;
    int i = 0;
    while (fread(&asistencia, sizeof(RegistroAsistencia), 1, pArchivo))
    {
        if (asistencia.getIdRegistroAsistencia() == IDAsistencia)
        {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

RegistroAsistencia GestionArchivoAsistencias::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return RegistroAsistencia();
    }
    RegistroAsistencia asistencia;
    fseek(pArchivo, sizeof(RegistroAsistencia) * posicion, SEEK_SET);
    fread(&asistencia, sizeof(RegistroAsistencia), 1, pArchivo);
    fclose(pArchivo);
    return asistencia;
}

int GestionArchivoAsistencias::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(RegistroAsistencia);
    fclose(pArchivo);
    return cantidadRegistros;
}

void GestionArchivoAsistencias::Leer(int cantidadRegistros, RegistroAsistencia *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if (pArchivo == NULL)
    {
        return;
    }
    for (int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(RegistroAsistencia), 1, pArchivo);
    }
    fclose(pArchivo);
}
