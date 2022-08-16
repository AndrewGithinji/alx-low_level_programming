#include "lists.h"
#include <stdlib.h>

/**
*pop_listint - a function that deletes the head node
*@head: Pointer to first node
*Return: head node data.
*/
int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp;

	if (*head == NULL)
	return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);
	return (data);
}
