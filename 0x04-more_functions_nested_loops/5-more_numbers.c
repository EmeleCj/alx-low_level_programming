#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: void
 */

void more_numbers(void)
{
	int n, c;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)

			_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');

		}
		_putchar('\n');
	}
}
