#include "main.h"
#include <stdio.h>

/**
 * _strchr - search a character c in the string s
 * @s: string which may content the c character
 * @c: character which is being searched in the string s
 * Return: string after the c character or NULL if is not there
 */

char *_strchr(char *s, char c)
{
	int counter = 0;
	/* while: to go all the way the string*/
	while (s[counter] != '\0')
	{
		/*the string found the character*/
		if (s[counter] == c)
		{
			/*start printing from the s[counter] taken as 0*/
			return (s + counter);
		}
		counter++;
	}
	if (c == '\0')
	{
		return (s + counter);
	}
	return (NULL);

}
