#include"main.h"

/**
*print_line - a function that draws a straight line in the terminal
*@n: value of int
*
*/

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
