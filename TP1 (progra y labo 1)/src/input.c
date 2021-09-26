#include "input.h"
/// @fn int PedirEntero(char[], int, int)
/// @brief Me permite ingresar un entero y validarlo.
/// @param mensaje, aclarando la para que se utilizara el numero.
/// @param minimo, valor minimo q debe tener el numero.
/// @param maximo, valor maximo q debe tener el numero.
/// @return devuelve el numero ingresado.
int PedirEntero(char mensaje [], int minimo, int maximo)
{
	int numeroIngresado;

	printf ("%s",mensaje);
	scanf ("%d", &numeroIngresado);
	while (numeroIngresado< minimo || numeroIngresado>maximo)
	{
		printf ("Reingrese valor ((%d)-(%d)): ",minimo,maximo);
		scanf ("%d", &numeroIngresado);
	}

	return numeroIngresado;
}


/// @fn float PedirFloat(char[], int, int)
/// @brief Me permite ingresar un flotante y validarlo.
/// @param mensaje, aclarando la para que se utilizara el numero.
/// @param minimo, valor minimo q debe tener el flotante.
/// @param maximo, valor maximo q debe tener el flotante.
/// @return devuelve el flotante ingresado.
float PedirFloat(char mensaje [], int minimo, int maximo)
{

	float numeroIngresado;

	printf ("%s",mensaje);
	scanf ("%f", &numeroIngresado);
	while (numeroIngresado< minimo || numeroIngresado>maximo)
	{
		printf ("Reingrese valor ((%d)-(%d)): ",minimo,maximo);
		scanf ("%f", &numeroIngresado);
	}

	return numeroIngresado;
}


/// @fn char PedirChar(char[], char)
/// @brief Me permite ingresar un caracter.
/// @param mensaje aclarando la para que se utilizara el caracter.
/// @param x, caracter que debera ser ingresado.
/// @param y, caracter que debera ser ingresado.
/// @return devuelve el caracter ingresado.
char PedirChar(char mensaje [], char x,char y){

	char caracterIngresado;

	printf ("%s",mensaje);
	fflush(stdin);
	scanf ("%c", &caracterIngresado);
	while (caracterIngresado != 'x' && caracterIngresado != 'y')
	{
		printf ("Reingrese caracter: ");
		fflush(stdin);
		scanf ("%c", &caracterIngresado);
	}

	return caracterIngresado;
}


/// @fn int GetString(char[], char[], int)
/// @brief Me permite ingresar un array de caracteres y validarlo para que no desborde.
/// @param mensaje, me indica que debo ingresar.
/// @param cadena, donde se guardara el array.
/// @param tam, candidad de caracteres que podra tener como maximo.
/// @return 1 si la f(x) se pudo ejecutar correctamente, 0 si no lo pudo hacer.
int GetString(char mensaje[], char cadena[],int tam)
{
	char auxiliarString[1000];
	int retorno;
	retorno = 0;

	if (mensaje != NULL && cadena !=NULL)
	{
		printf("%s",mensaje);
		fflush(stdin);
		gets(auxiliarString);
		while(strlen(auxiliarString)>tam)
		{
			printf("Reingrese: ");
			fflush(stdin);
			gets(auxiliarString);
		}
		strcpy(cadena,auxiliarString);
		retorno=1;
	}
	return retorno;
}



