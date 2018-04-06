/* Las siguientes funciones verifican si ciertos tipos de datos requeridos al usuario son validos
y los muestra en pantalla, caso contrario el usuario puede reintentar X cantidad de veces
ingresar el dato solicitado, una vez agotados los reintentos muestra un mensaje de error*/

int getInt (char* mensaje, char* mensajeError, int reintentos, int minimo, int maximo, int* resultado);
float getFloat (char* mensaje, char* mensajeError, int reintentos, float minimo, float maximo, float* resultado);
int getChar (char* mensaje, char* mensajeError, int reintentos, char minimo, char maximo, char* resultado);
float obtenerPromedio (int lista[], int cantidad);
int obtenerPromediov2 (int lista[], int cantidad, float* resultado);
