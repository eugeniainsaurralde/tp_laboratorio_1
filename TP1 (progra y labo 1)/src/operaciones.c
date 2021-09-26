#include "operaciones.h"

/// @fn float Suma(float, float, float*)
/// @brief Me permite sumar dos numeros.
/// @param operando1, 1er sumando.
/// @param operando2, 2do sumando.
/// @param pSuma, parametro donde se "guardara" el resultado.
/// @return 1
float Suma(float operando1, float operando2, float *pSuma)
{
	float suma;

	suma = operando1 + operando2;

	*pSuma = suma;

	return 1;
}

/// @fn float Resta(float, float, float*)
/// @brief Me permite restar dos numeros.
/// @param operando1, minuendo.
/// @param operando2, sustraendo.
/// @param pSuma, parametro donde se "guardara" el resto.
/// @return 1
float Resta(float operando1, float operando2, float *pResta)
{
	float resta;

	resta = operando1 - operando2;

	*pResta = resta;

	return 1;
}

/// @fn float Division(float, float, float*)
/// @brief Me permite dividir dos numeros.
/// @param operando1, dividendo.
/// @param operando2, divisor.
/// @param pDivision, donde se "guardara" el cociente.
/// @return 1 si se pudo realizar la operacion, 0 si no se pudo realizar.
float Division(float operando1, float operando2, float *pDivision)
{
	float division;
	int flagDivision;
	flagDivision = 0;

	if (operando2 != 0)
	{
		division = operando1 / operando2;
		flagDivision = 1;
	}

	*pDivision = division;

	return flagDivision;
}

/// @fn float Multiplicacion(float, float, float*)
/// @brief Me permite multiplicar numeros.
/// @param operando1, coeficiente 1.
/// @param operando2, coeficiente 2.
/// @param pMultiplicacion, donde se "guardara" el producto.
/// @return 1.
float Multiplicacion(float operando1, float operando2, float *pMultiplicacion)
{
	float multiplicacion;

	multiplicacion = operando1 * operando2;

	*pMultiplicacion = multiplicacion;

	return 1;
}

/// @fn long int Factorial(float)
/// @brief Me permite calcular el factorial de un numero entero,menor a 12.
/// @param operando, numero al cual debemos calcular el factorial.
/// @return -1 si no se pudo realizar la operacion, el resultado del factorial si se pudo.
long int Factorial(float operando)
{
	long int resultado;
	float x;
	resultado = -1;
	x= operando-(int)operando;

	if (operando>=0 && operando <=12 && x==0)
	{
		if (operando == 0)
		{
			resultado = 1;
		}
		else
		{
			resultado = operando * Factorial(operando - 1);
		}
	}

	return resultado;
}

