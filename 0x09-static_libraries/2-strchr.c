#include "main.h"
#include <string.h>

/**
* *_strchr - a function that locates a character in a string.
*@c:character in the string
*@s:string
*Return: c , NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')

	{
	if (*s == c)
	return (s);
	s++;
	}
	if (*s == c)
	return (s);
	else
	return (NULL);
}
