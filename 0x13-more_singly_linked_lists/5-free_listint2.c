#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets the head to NULL.
 * @head: Pointer to the head of the list.
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
