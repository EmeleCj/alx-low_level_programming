#inlcude "main.h"

/**
 * _strcpy -copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Retunr: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' i++)
	{
		dest[1] = src[1];
	}

	dest[i++] = '\0';

	return (dest);
}
