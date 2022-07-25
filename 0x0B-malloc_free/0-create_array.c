#include "main.h"
#include <stdlib.h>

/**
*create_array - Creates an array of strings
*@size:size of the array
*@c: Character
*Return: Return 0
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	t = malloc(sizeof(char) * size);
	if (t == NULL)
	{
	return (0);
	}
	for (i = 0; i < size; i++)
	{
	t[i] = c;
	}
	return (t);
}
