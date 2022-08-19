#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head nodes data (n).
 * @head: Pointer to the head of the list.
 *
 * Return: the head nodes data (n) or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n =  0;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
