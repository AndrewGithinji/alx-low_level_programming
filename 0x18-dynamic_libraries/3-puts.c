#include "main.h"
#include <string.h>

/**
* _puts -  a function that prints a string
* @str: string
* Return: zero
*/
void _puts(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

