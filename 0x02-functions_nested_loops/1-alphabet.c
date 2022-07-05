#include "main.h"

/**
* main - entry point
*
* Return: success is always zero
*/
void print_alphabet(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
