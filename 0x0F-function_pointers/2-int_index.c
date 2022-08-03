#include "function_pointers.h"

/**
*int_index - a function that searches for an integer.
*@array: the array
*@size: size of the array
*@cmp: pointer to the function
*Return: check for success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);

	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	return (i);
	}
	return (-1);
}
