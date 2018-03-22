#include <stdio.h>
#include <stdlib.h>

#define CANT_NUM 5

int main()
{
    int i;
    float numero;
    float promedio;
    float acum = 0;
    int max;
    int min;
    for(i = 0; i < CANT_NUM; i++)
    {
        printf("Ingrese el numero: \n");
        scanf("%f", &numero);
        acum = numero + acum;
        if (numero > max || i == 0)
        {
            max = numero;
        }
        if (numero < min || i == 0)
        {
            min = numero;
        }
    }
    promedio = acum / CANT_NUM;
    printf("\nEl promedio es: %.2f", promedio);
    printf ("\nEl numero maximo es: %d", max);
    printf ("\nEl numero minimo es: %d", min);
    return 0;
}
