#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Given string
 * Return: codified string
 */

char *leet(char *s)
{
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";
	int ia = 0;
	int ib = 0;

	while (s[ia] != '\0')
	{
		for (ib = 0; ib <= 10; ib++)
		{
			if (s[ia] == str1[ib])
				s[ia] = str2[ib];
		}
		ia++;
	}
	return (s);
}
