#inlcude "main.h"

/**
 * _strcpy -copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, b = 0;

	for (i = 0; src[i] != '\0' ++i)
	{
		dest[b] = src[i];
		++b;
	}

	dest[b] = '\0';

	return (dest);
}
