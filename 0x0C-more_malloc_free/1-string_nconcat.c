#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - fn to concat two strings
 * @s1: first string
 * @s2: second string
 * @n: interger to loop through  s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p_scat;

	unsigned int i, j, x, s1_len, s2_len;

	if (!s1)
	{
	s1 = "";
	}
	if (!s2)
	{
	s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	p_scat = malloc((sizeof(char)) * (s1_len + n + 1));
	if (p_scat == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	p_scat[i] = s1[i];
	}
	if (n >= s2_len)
	{
	for (j = 0; s2[j] != '\0'; j++)
	{
	p_scat[(i + j)] = s2[j];
	}
	p_scat[(s1_len + n + 1)] = '\0';
	return (p_scat);
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	p_scat[(i + x)] = s2[x];
	}
	p_scat[(s1_len + n + 1)] = '\0';
	return (p_scat);
	}
}
