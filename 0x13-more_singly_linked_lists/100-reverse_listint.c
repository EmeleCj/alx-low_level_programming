#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return:  a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *cursor;

	temp = *head;
	cursor = *head;
	*head = NULL;

	while (cursor != NULL)
	{
		cursor = cursor->next;
		temp->next = *head;
		*head = temp;
		temp = cursor;
	}
	return (*head);
}
