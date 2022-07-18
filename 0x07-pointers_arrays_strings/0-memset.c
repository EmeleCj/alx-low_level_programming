#include "main.h"

/**
 * _memset - memset is a function that changes the value of b for another
 * in the first n bytes
 * @s: pointer to the variabl's adress where is gonna be overwritten with 'b'
 * @b: variable that contains the value to be overwritten in the pointer '*s'
 * the first n bytes
 * @n: number of bytes that is gonna be overwritten in pointer '*s'
 * Return: pointer to the address where have been changed the values
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;
/* while ocunter is less than n bytes given in the main.c*/
	while (counter < n)
	{
		/*s position should rasie and overwritten n */
		s[counter] = b;
		counter++;
	}

	return (s);
}
