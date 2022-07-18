#include "main.h"

/**
* *_memcpy - a function that copies memory area.
*@dest:string to copy to
*@src:string to copy from
*@n:unsigned int n
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}

