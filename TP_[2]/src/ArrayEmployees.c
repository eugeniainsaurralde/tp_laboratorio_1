#include "ArrayEmployees.h"


int initEmployees(Employee list[],int len)
{
	int i;
	int retorno;
	retorno = -1;

	if (list != NULL && len > 0)
	{
		for(i=0; i<len;i++)
		{
			list[i].isEmpty = TRUE;
			retorno = 0;
		}
	}
	return retorno;
}

int Employee_searchFree (Employee list[],int len)
{
	int i;
	int index;

	index =-1;

	for(i=0; i<len;i++)
	{
		if (list[i].isEmpty == TRUE)// == 1 si esta vacio
		{
			index = i;
			break;
		}
	}
	return index;
}

void requestAEmployee (int idIncremento, int id, char name[], char lastName, int sector, int salary)
{
	id =idIncremento ;
	PedirCadena("Ingrese el nombre del empleado: ", name, 50);
	PedirCadena("Ingrese el nombre del empleado: ", lastName, 51);
	sector = PedirEntero("Ingrese el sector al que pertenece el empleado (1-Tester, 2-Analista, 3-Programador):",0,3);
	salary = PedirFloat("Ingrese el salario del empleado", 0, 100000);
	idIncremento = id++;
}

int addEmployee(Employee list[], int len, int id, char name[],char lastName[],float salary,int sector)
{
	int index;
	int retorno;

	retorno = - 1;
	index = Employee_searchFree(list, len);

	if (list != NULL && name != NULL && lastName != NULL && len>0)
	{
		if (index != -1)
			{
				 list[index].id = id;
				 list[index].name= name;
				 list[index].lastName= lastName;
				 list[index].salary= salary;
				 list[index].sector = sector;
				 list[index].isEmpty= FALSE;
				 retorno = 0;
			}
	}
	return retorno;
}
