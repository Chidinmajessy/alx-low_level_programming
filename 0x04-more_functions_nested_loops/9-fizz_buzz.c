#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from1 to 100, but for multiples of three
 * print Fizz instead of numbers and for multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0 && i % 5 !=0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0 && i % 3 !=0)
		{
			printf("Buzz ");
		} else if (i == 1)
		{
			printf("%d ", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
