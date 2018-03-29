#include <stdio.h>
#include <stdlib.h>

int sumaEnteros (int primerNumero, int segundoNumero, float* resultado) //el * guarda la direcicon de memoria
{
    long resultadoCalculo;
    int retorno = -1;
    resultadoCalculo = primerNumero + segundoNumero;
    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        retorno = 0;
    }
    return retorno;
}
int restaEnteros (int primerNumero, int segundoNumero, float* resultado)
{
    long resultadoCalculo;
    int retorno = -1;
    resultadoCalculo = primerNumero - segundoNumero;
    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        retorno = 0;
    }
    return retorno;
}
int multiplicaEnteros (int primerNumero, int segundoNumero, float* resultado)
{
    long resultadoCalculo;
    int retorno = -1;
    resultadoCalculo = primerNumero * segundoNumero;
    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        retorno = 0;
    }
    return retorno;
}
float dividir (int primerNumero, int segundoNumero, float* resultado)
{
    float resultadoCalculo;
    int retorno = -1;
    resultadoCalculo = (float)primerNumero / segundoNumero;
    if (segundoNumero != 0)
    {
        *resultado = resultadoCalculo;
        retorno = 0;
    }
    return retorno;
}

int main()
{
    int primerNumero;
    int segundoNumero;
    float resultado;
    int operacion;
    printf("Bienvenido, este programa realiza una operacion entre dos numeros enteros. \n");
    printf("Ingrese el primer numero: \n");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &segundoNumero);
    printf("A continuacion elija la operacion que desea realizar. \n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n");
    scanf("%d", &operacion);
    switch (operacion)
    {
        case 1:
        {
            if (sumaEnteros(primerNumero, segundoNumero, &resultado) == 0)
            {
                printf("El resultado es: %.f\n", resultado);
            }
            else
            {
                printf ("Error");
            }
            break;
        }
        case 2:
        {
            if (restaEnteros(primerNumero, segundoNumero, &resultado) == 0)
            {
                printf("El resultado es: %.f\n", resultado);
            }
            else
            {
                printf ("Error");
            }
            break;
        }
        case 3:
        {
            if (multiplicaEnteros(primerNumero, segundoNumero, &resultado) == 0)
            {
                printf("El resultado es: %.f\n", resultado);
            }
            else
            {
                printf ("Error");
            }
            break;
        }
        case 4:
        {
            if (dividir(primerNumero, segundoNumero, &resultado)== 0)
            {
                printf("El resultado es: %.2f \n", resultado);
            }
            else
            {
                printf("No se puede dividir por cero");
            }
            break;
        }
    }
    return 0;
}

