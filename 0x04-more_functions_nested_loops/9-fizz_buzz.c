#include <stdio.h>

/**
 * main - prints numbers from1 to 100, but for multiples of three
 * print Fizz instead of numbers and for multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i++ < 10;)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz"):
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i == 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", i);
			}
		}
	printf("\n");
	return (0);
}
