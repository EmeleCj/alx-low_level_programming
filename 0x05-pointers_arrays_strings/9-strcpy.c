#inlcude "main.h"

/**
 * *_strcpy -copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
