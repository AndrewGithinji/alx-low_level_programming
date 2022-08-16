#include "lists.h"
#include <stdlib.h>

/**
* sum_listint - sums a linked list
*@head: linked list
* Return: 0
*/
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
	total += head->n;
	head = head->next;
	}
	return (total);
}
