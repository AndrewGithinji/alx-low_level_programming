#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - a function that prints numbers, followed by a new line.
*@separator: pointer
*@n: number of integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, unsigned int));

	if (!separator || i == n - 1)
	continue;

	printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
