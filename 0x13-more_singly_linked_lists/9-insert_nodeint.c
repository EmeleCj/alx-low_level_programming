#include "lists.h"

/**
 * insert_nodeint_at_index - func. that inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: Number to store in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cursor, *list_len;
	unsigned int i = 1, count = 0;

	list_len = *head;
	while (list_len != NULL)
	{
		count++;
		list_len = list_len->next;
	}
	if (idx > count)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	cursor = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		for (; i < idx; i++)
			cursor = cursor->next;

		new_node->next = cursor->next;
		cursor->next = new_node;
		return (new_node);
	}
	return (NULL);
}
