#include "main.h"

/**
*swap_int - a function that swaps the values of two integers.
*@a: Variable integer.
*@b: Variable integer.
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
