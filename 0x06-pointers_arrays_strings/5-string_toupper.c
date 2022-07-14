#include "main.h"
#include <string.h>

/**
* string_toupper - a function that changes all lowercase letters to uppercase.
* @p: a paramater
* Return: character variable
*/
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
	if (p[i] >= 97 && p[i] <= 122)
	{
		p[i] = p[i] - 32;
	}
		i++;
	}
	return (p);
}
