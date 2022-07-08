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
			for (base = size - hgt; base > hgt; base--)
			{
				_putchar (' ');
			}
			for (aux = 0; aux < hgt + 1; aux++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
	else
	{
		_putchar('\n');
	}
}
