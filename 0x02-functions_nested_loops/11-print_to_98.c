#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print nos to 98
* @n: nos given by program
*/

void print_to_98(int n)
{
		int j;

		if (n <= 98)
	{
		for (j = n; j <= 98; j++)
	{
		printf("%d", j);
		if (j == 98)
	{
		break;
	}
		printf(", ");
	}
		printf("\n");
	}
		else
	{
		for (j = n; j >= 98; j--)
	{
		printf("%d", j);
		if (j == 98)
	{
		break;
	}
		printf(", ");
	}
		printf("\n");
	}
}

