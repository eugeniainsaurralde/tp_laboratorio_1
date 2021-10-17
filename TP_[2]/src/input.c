#include "input.h"
/// @fn int PedirEntero(char[], int, int)
/// @brief Me permite ingresar un entero y validarlo.
/// @param mensaje, aclarando la para que se utilizara el numero.
/// @param minimo, valor minimo q debe tener el numero.
/// @param maximo, valor maximo q debe tener el numero.
/// @return devuelve el numero ingresado.
//int PedirEntero(char mensaje [], int minimo, int maximo)
//{
//	int numeroIngresado;
//
//	printf ("%s",mensaje);
//	scanf ("%d", &numeroIngresado);
//	while (numeroIngresado< minimo || numeroIngresado>maximo)
//	{
//		printf ("Reingrese valor ((%d)-(%d)): ",minimo,maximo);
//		scanf ("%d", &numeroIngresado);
//	}
//
//	return numeroIngresado;
//}

int PedirEntero(char mensaje [], int minimo, int maximo)
{
	int numeroIngresado;
	char numeroAuxiliar[9];

	InicializarArray(numeroAuxiliar,9);

	printf ("%s",mensaje);
	fflush(stdin);
	gets(numeroAuxiliar);

	ChekCaracteresNumericos(numeroAuxiliar,9);

	numeroIngresado = (int) numeroAuxiliar;

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
	int p;


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
int PedirCadena(char mensaje[], char cadena[],int tam)
{
	char auxiliarString[1000];
	int retorno;
	retorno = 0;

	if (mensaje != NULL && cadena !=NULL && tam>0)
	{
		printf("%s",mensaje);
		fflush(stdin);
		gets(auxiliarString);
		while(strlen(auxiliarString)>tam || ChekCaracteresAlfabeticos(auxiliarString,tam)==1)
		{
			printf("Ingresar solo caracteres alfabeticos (max. cantidad %d), reingrese: ",tam);
			fflush(stdin);
			gets(auxiliarString);
		}
		strcpy(cadena,auxiliarString);
		retorno=1;
	}
	return retorno;
}

int ChekCaracteresAlfabeticos(char cadena[],int tam)
{
	int retorno;
	int i;

	retorno = 0;
	for (i=0; i<tam && cadena [i]!='\0';i++)
	{
		if (isalpha(cadena[i])==0)
		{
			retorno = 1;
			break;
		}
	}
	return retorno;
}

int ChekCaracteresNumericos(char numeroAuxiliar[],int tam)
{
	int i;
	int retorno;
	retorno = 0;

	for (i=0; i<tam && numeroAuxiliar [i]!='\0';i++)
	{
		if (isdigit(numeroAuxiliar[i])==0)
		{
			printf ("Reingrese un valor numerico: ");
			fflush(stdin);
			gets(numeroAuxiliar);

			retorno = 1;
		}
	}
	return retorno;
}

int ChekCaracteresNumericos(int numeroIngresado)
{
	int i;
	char numeroAuxiliar[9];
	int retorno;
	retorno = 0;
	numeroAuxiliar[]=(char*) numeroIngresado;

	for (i=0; i<tam && numeroAuxiliar [i]!='\0';i++)
	{
		if (isdigit(numeroAuxiliar[i])==0)
		{
			printf ("Reingrese un valor numerico: ");
			fflush(stdin);
			gets(numeroAuxiliar);

			retorno = 1;
		}
	}
	return retorno;
}

void InicializarArray(char array[],int tam)
{
	int i;

	for (i=0;i<tam;i++)
	{
		array[i]=0;
	}
}
