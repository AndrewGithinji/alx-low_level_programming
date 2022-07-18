#include "main.h"
#include <stdlib.h>

/**
* _strstr - a function that locates a substring.
* @haystack: Pointer which is scanned
* @needle: Pointer that is going to be found.
* Return: pointer to the beginning of the located substring
**/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *word1 = haystack;
		char *word2 = needle;

		while (*word2 == *haystack && *word2 != '\0' && *haystack != '\0')
		{
		haystack++;
		word2++;
		}
		if (*word2 == '\0')
		return (word1);
		haystack = word1 + 1;
	}
	return (NULL);
}
