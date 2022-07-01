#include <stdio.h>

/**
* main - prints the alphabetics
*
* Return: - Always (success)
*/
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i--)
	{
	putchar(i + '8');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
