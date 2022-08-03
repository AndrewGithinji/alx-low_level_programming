#include "function_pointers.h"

/**
* print_name - prints a name.
*@name: The name
*@f: Pointer to the function
*Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
