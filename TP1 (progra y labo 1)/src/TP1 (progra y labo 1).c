/*
 ============================================================================
 Name        : TP1.c
 Author      : Insaurralde Eugenia
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "operaciones.h"

void MostrarFactorial(long int, long int, float ,float);

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	float operando1;
	float operando2;

	float suma;
	float resta;
	float division;
	int flagDivision;
	float multiplicacion;
	long int factorial1;
	long int factorial2;

	do {system("cls");
		printf("\n\n          ****TP1-Insaurralde Eugenia****\n");
		printf("---------------------Calculadora---------------------\n");
		printf("1.  Ingresar el primer operando (A=%.2f)\n2.  Ingresar el segundo operando (B=%.2f)\n3.  Calcular todas las operaciones\n4.  Informar resultados\n5.  Salir\n",operando1,operando2);
		opcion = PedirEntero("Elija una opcion: \a", 1, 5);
		system("pause");
		switch (opcion) {
			case 1:
				printf("\n--------------Ingreso 1er operando--------------\n");
				operando1 = PedirFloat("\nIngrese el primer operando: ", -1000,1000);

			break;
			case 2:
				printf("\n--------------Ingreso 2do operando--------------\n");
				operando2 = PedirFloat("\nIngrese el segundo operando: ", -1000,1000);

			break;
			case 3:
				printf("\n------------Calculando operaciones------------\n");
				Suma(operando1, operando2, &suma);
				Resta(operando1, operando2, &resta);
				Multiplicacion(operando1, operando2, &multiplicacion);
				flagDivision= Division(operando1, operando2, &division);
				factorial1 = Factorial(operando1);
				factorial2 = Factorial(operando2);

			break;
			case 4:
				printf("\n-------------Informe de resultados--------------\n\n");
				printf("El resultado de %.2f+%.2f es: %.2f\n", operando1, operando2,suma);
				printf("El resultado de %.2f-%.2f es: %.2f\n", operando1, operando2,resta);
				printf("El resultado de %.2f*%.2f es: %.2f\n", operando1, operando2,multiplicacion);
				if (flagDivision == 1)
				{
					printf("El resultado de %.2f/%.2f es: %.2f\n", operando1, operando2,division);
				}
				else
				{
					printf("No es posible realizar una division por cero\n");
				}
				MostrarFactorial(factorial1,factorial2,operando1,operando2);

			break;
			case 5:
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Gracias por utilizar mi app ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
			break;
		}

	} while (opcion != 5);
	return EXIT_SUCCESS;
}


void MostrarFactorial(long int factorial1, long int factorial2, float operando1, float operando2) {
	if (factorial1 == -1 && factorial2 == -1)
	{
		printf("El factorial de %.2f y %.2f no se puede calcular\n", operando1,operando2);
	}
	else if (factorial1 == -1 || factorial2 == -1)
	{
		if (factorial1 == -1)
		{
			printf("El factorial de %.2f no se puede calcular y El factorial de %.2f es: %ld\n",operando1, operando2, factorial2);
		}
		else if (factorial2 == -1)
		{
			printf("El factorial de %.2f es: %ld y El factorial de %.2f no se puede calcular\n",operando1, factorial1, operando2);
		}
	}
	else
	{
		printf("El factorial de %.2f es: %ld y El factorial de %.2f es: %ld\n",operando1, factorial1, operando2, factorial2);
	}
}

