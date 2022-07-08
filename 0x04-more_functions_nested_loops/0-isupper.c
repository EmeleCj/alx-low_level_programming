#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: input value to check
 * Return: 1 if uppercase character  0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')

		return (1);
	else
		return (0);
}
