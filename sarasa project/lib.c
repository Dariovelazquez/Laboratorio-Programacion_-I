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
