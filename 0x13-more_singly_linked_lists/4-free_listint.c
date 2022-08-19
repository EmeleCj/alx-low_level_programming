#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
