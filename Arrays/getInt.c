#include <stdio.h>
#include <stdlib.h>
//-----Para datos del tipo INT-----//
int getInt (char* mensaje,
            char* mensajeError,
            int reintentos,
            int minimo,
            int maximo,
            int* resultado)
{
    long edad;
    int retorno = -1;
    do
    {
        reintentos--;
        printf("%s", mensaje);
        scanf ("%ld", &edad);
        if (edad >= minimo && edad <= maximo)
        {
            *resultado = (int)edad;
            retorno = 0;
            break;
        }
        printf("%s", mensajeError);
    }while (reintentos >= 0);

    return retorno;
}
//-----Para tipo FLOAT-----//
float getFloat (char* mensaje,
              char* mensajeError,
              int reintentos,
              float minimo,
              float maximo,
              float* resultado)
{
    float precio;
    int retorno = -1;
    do
    {
        reintentos--;
        printf("%s", mensaje);
        scanf ("%f", &precio);
        if (precio >= minimo && precio <= maximo)
        {
            *resultado = precio;
            retorno = 0;
            break;
        }
        printf("%s", mensajeError);
    }while (reintentos >= 0);

    return retorno;
}
//-----Para caracteres-----//
int getChar (char* mensaje, char* mensajeError, int reintentos, char minimo, char maximo, char* resultado)
{
    char opcion;
    int retorno = -1;
    do
    {
        reintentos--;
        printf("%s", mensaje);
        fflush(stdin);
        scanf ("%c", &opcion);
        if (opcion >= minimo && opcion <= maximo)
        {
            *resultado = opcion;
            retorno = 0;
            break;
        }
        printf("%s", mensajeError);
    }while (reintentos >= 0);

    return retorno;
}
float obtenerPromedio (int lista[], int cantidad)
{
    int i;
    int acum = 0;
    float promedio;
    for (i = 0; i < cantidad; i++)
    {
        acum += lista[i];
    }
    promedio = (float)acum / cantidad;
    return promedio;

}
int obtenerPromediov2 (int lista[], int cantidad, float* resultado)
{
    int i;
    int acum = 0;
    int retorno;
    if (cantidad <= 0 || resultado == NULL)
        retorno = -1;
    else
        retorno = 0;
    for (i = 0; i < cantidad; i++)
    {
        acum += lista[i];
    }
    *resultado = (float)acum / cantidad;
    return retorno;
}
