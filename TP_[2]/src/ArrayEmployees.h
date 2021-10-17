
#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "input.h"
#define TRUE 1 //vacio
#define FALSE 0 // cargado


typedef struct
{
	int id;
	char name[50];
	char lastName [51];
	float salary;
	int sector;
	int isEmpty;
}Employee;

/// @fn int initEmployees(Employee[], int)
/// @brief To indicate that all position in the array are empty,
/// this function put the flag (isEmpty) in TRUE in all
/// position of the array.
/// @param list  Employee* Pointer to array of employees
/// @param len  int Array length
/// @return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
int initEmployees(Employee list[],int len);

/// @fn int Employee_BuscarLibre(Employee[], int)
/// @brief  would let me search a space in memory
/// @param list  Employee* Pointer to array of employees
/// @param len int Array length
/// @return -1 if there isn't space or >-1 the space free
int Employee_searchFree (Employee lista[],int len);

void requestAEmployee (int idIncremento, int id, char name[], char lastName, int sector, int salary);

int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector);




#endif /* ARRAYEMPLOYEES_H_ */
