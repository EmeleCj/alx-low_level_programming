#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * listint_t list.
 * @head: Pointer to the head of the list.
 * @index:is the index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list_len, *cursor, *temp;
	unsigned int i = 1, len = 0;

	list_len = *head;
	while (list_len != NULL)
	{
		list_len = list_len->next;
		len++;
	}
	if (index > len)
		return (-1);

	cursor = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = cursor->next;
		free(cursor);
		return (1);
	}
	while (i < index)
	{
		cursor = cursor->next;
		i++;
	}
	temp = cursor->next;
	cursor->next = cursor->next->next;
	free(temp);
	return (1);
}
