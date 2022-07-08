#include "main.h"
/**
 * print_triangle -function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int hgt, base, aux;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (base = 0; base < size; base++)
			{
				aux = (size - hgt) - 1;
				if (base < aux)
					_putchar('');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
