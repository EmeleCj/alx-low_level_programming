#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an element of an array
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
