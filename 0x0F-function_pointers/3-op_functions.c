#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*op_add - adds the sum of a and b
*@a: integer
*@b: integer
*Return: returns the sum of a and b.
*/
int op_add(int a, int b)
{
	return(a + b);
}
/**
*op_sub - subtracts the sum of a and b
*@a: integer
*@b: integer
*Return: returns the sum of a and b.
*/
int op_sub(int a, int b)
{
	return(a - b);
}
/**
*op_mul - multiplys the sum of a and b
*@a: integer
*@b: integer
*Return: returns the sum of a and b.
*/
int op_mul(int a, int b)
{
	return(a * b)
}
/**
*op_div - divides the sum of a and b
*@a: integer
*@b: integer
*Return: returns the sum of a and b.
*/
int op_div(int a, int b)
{
	if (b == 0)
	printf ("Error\n");
	exit(100);
	else	
	return(a / b);
}
/**
*op_mod - calc the modulus sum of a and b
*@a: integer
*@b: integer
*Return: returns the sum of a and b.
*/
int op_mod(int a, int b);
{
	if (b == 0)
	printf ("Error\n");
	exit(100);
	else
	return(a % b);
}

