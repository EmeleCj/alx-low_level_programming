#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
