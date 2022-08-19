#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: index of the node, starting at 0.
 *
 * Return: the nth node of a linked list or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor;
	unsigned int list_len = 0;

	cursor = head;

	while (cursor != NULL)
	{
		list_len++;
		cursor = cursor->next;
	}
	if (index > list_len || head == NULL)
		return (NULL);

	for (list_len = 0; list_len < index; list_len++)
		head = head->next;

	return (head);
}
