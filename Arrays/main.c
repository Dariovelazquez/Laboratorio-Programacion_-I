#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"

#define SIZE_ARRAY 5

int main()
{
    int nota[SIZE_ARRAY];
    int i;
    float promedio;
    for (i = 0; i < SIZE_ARRAY; i++)
    {
        printf("Ingrese la nota: \n");
        scanf("%d", &nota[i]);
    }
    //promedio = obtenerPromedio(nota, SIZE_ARRAY);
    if (obtenerPromediov2(nota, SIZE_ARRAY, &promedio) == 0)
    {
        printf("El promedio es: %.3f", promedio);
    }
    else
    {
        printf("Error de datos en ARRAY");
    }
    /*if (nota[i] > max || i == 0)
    {
          max = nota[i];
    }
    printf("El promedio es: %.2f \n", promedio);*/
    //printf("El numero maximo es: %d\n:", max);


    return 0;
}
