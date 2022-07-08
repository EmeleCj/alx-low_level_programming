#include <stdio.h>
/**
 * main -program that prints the number from 1 to 100
 * But for multiples of three print fizz
 * and for the multiples of five print buzz
 * Return: 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; b++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num == 100)
		{
			printf("Buzz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
