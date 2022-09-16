#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from 1 to 100, followed by a new line
 * print Fizz instead of numbers for multiples of three
 * for multiples of five print Buzz.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
<<<<<<< HEAD
		if (i == 100)
			printf("Buzz");
		else if (((i % 3) == 0) && ((1 % 5) == 0))
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
=======
	if (i % 3 == 0 && i % 5 != 0)
	{
		printf("Fizz ");
	} else if (i % 5 == 0 && i % 3 != 0)
	{
		printf("Buzz ");
	} 
	else if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz ");
	} else if (i == 100)
	{
		printf("%d ", i);
	} else
	{
		printf(" %d", i);
	}
>>>>>>> 8589b2067f1aab019a5a56ced010ef0e475e760a
	}
	printf("\n");

	return (0);
}
