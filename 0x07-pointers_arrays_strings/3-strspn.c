#include "main.h"

/**
* *_strspn - a function that gets the length of a prefix substring.
*@s: First string
*@accept: Second string
*
*Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int i, k;
	unsigned int len;

	i = 0;
	while (s[i] != '\0')
	{
	a = 0;
	for (k = 0; accept[k] != '\n'; k++)
	{
	if (s[i] == accept[k])
	a = 1;
	}
	k = 0;
	if (a == 0)
	break;
	len++;
	i++;
	}
	return (i);
}
