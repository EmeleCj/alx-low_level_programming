#include "main.h"

/**
 * cap_string -> capitalization function
 * @x: string param
 * Return: capitalized version of the string
 */

char *cap_string(char *x)
{
	int ia = 0;
	int ib;

	char str[] = " \t\n,;.!,?\"(){}\0";

	if (s[ia] >= 'a' && s[ia] <= 'z')
		s[ia] = s[ia] - 32;

	while (s[ia] != '\0')
	{
		if (s[ia] >= 'a' && s[ia] <= 'z')
		{
			for (ib = 0; str[ib] != '\0\; ib++)
			{
				if (s[ia - 1] == str[ib])
					s[ia] = s[ia] - 32;
			}
		}
		ia++;
	}
	return (s);
}
