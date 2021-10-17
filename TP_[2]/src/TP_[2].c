/*
 ============================================================================
 Name        : TP_[2].c
 Author      : Isaurralde Eugenia
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "ArrayEmployees.h"
#define LEN 5


int main(void) {

	setbuf(stdout,NULL);
	Employee list[LEN];

	initEmployees(list,LEN);

	int idIncremento;
	int id;
	char name[50];
	char lastName[51];
	int sector;
	int salary;

	int opcion;

	idIncremento = 0;

	do{
		printf("------------MENU--------------");
		printf("\n1)Altas.\n2)Baja.\n3)Modificar.\n4)Informes.\n5)Salir.\n");
		opcion= PedirEntero("Ingrese una opcion: ", 1, 5);

		switch(opcion)
		{
			case 1:
				requestAEmployee(idIncremento, id, name, lastName, sector, salary);
				if (addEmployee(list, LEN, id, name, lastName, salary, sector)==-1)
				{

				}

			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
				printf("-----------Gracias por utilizar nuestro sistema-----------");
			break;
		}
	}while (opcion != 5);

}
