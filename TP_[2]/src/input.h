
#ifndef INPUT_H_
#define INPUT_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int PedirEntero(char[], int, int);
float PedirFloat(char[], int, int);
int ChekCaracteresNumericos(char [],int );
void InicializarArray(char array[],int tam);

char PedirChar(char [], char ,char );
int PedirCadena(char [], char [],int);
int ChekCaracteresAlfabeticos(char [],int );



#endif /* INPUT_H_ */
