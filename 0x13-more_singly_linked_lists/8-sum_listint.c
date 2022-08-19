#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list.
 * @head: Pointer to the head of the list.
 *
 * Return: the sum of 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
