/**
 * _strcpy -copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
