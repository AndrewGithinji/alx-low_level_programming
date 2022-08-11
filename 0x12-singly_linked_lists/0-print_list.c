#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*print_list - a function that prints all the elements of a list_t list
*@h: linked list
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

