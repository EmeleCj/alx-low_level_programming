#include "main.h"

/**
 * _strspn - count in bytes how many character are matched
 * @s: string being analyzed 'til the space
 * @accept: characters being scanned
 * Return: unsigned int with the number in bytes of the match
 */

unsigned int _strspn(char *s, char *accept)
{
	int 1;
	int j = 0;
	unsigned int n = 0;

	while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				n++;
			}
		}
		j++;
	}
	return (n);
}
