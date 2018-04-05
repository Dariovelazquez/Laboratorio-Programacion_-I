#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"

int main()
{
    int edad;
    float precio;
    char opcion;
    if (getInt("\nEdad?\n", "Rango valido [0-100]", 2, 0, 100, &edad) ==0)
    {
        printf("\nLa edad es: %d\n", edad);
    }
    else
    {
        printf("Error");
    }
    if (getFloat("\nCual es el precio?:\n", "Rango valido [0-10000]", 2, 1, 10000, &precio) ==0)
    {
        printf("\nEl precio es: %.3f\n", precio);
    }
    else
    {
        printf("Error");
    }
    if (getChar("\nIngrese Opcion A, B, C\n", "Solo [A][B][C] ", 2, 'A', 'C', &opcion) ==0)
    {
        printf("\nContinuar: %c\n", opcion);
    }
    else
    {
        printf("Error");
    }
return 0;
}
