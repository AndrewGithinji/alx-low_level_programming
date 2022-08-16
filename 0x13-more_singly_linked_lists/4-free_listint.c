#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - frees a linked list
*@head: linked list
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
	node = head;
	head = head->next;
	free(node);
	}
}
