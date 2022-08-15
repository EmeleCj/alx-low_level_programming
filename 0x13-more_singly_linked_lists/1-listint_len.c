#include "lists.h"

/**
 * listint_len - function that return the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elemebts in the list.
 */

size_t listnint_len(const listnt_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
