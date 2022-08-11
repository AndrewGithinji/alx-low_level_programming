#include "lists.h"
#include <stdio.h>

/**
* print_list - prints a linked list
* @h: linked list
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	n++;
	}
	return (n);
}

