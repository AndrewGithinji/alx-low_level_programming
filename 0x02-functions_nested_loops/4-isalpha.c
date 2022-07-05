#include "main.h"

/**
*_isalpha - checks for lowercase or Uppercase char
*@c: displays character
* Return:1 if c is lowercase 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}

