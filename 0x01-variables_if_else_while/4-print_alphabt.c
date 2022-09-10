#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - print if the number is positive, zero or negative
 *
 * Return: 0
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low !=e && low != q)
			putchar(low);
	}
		printf("\n");

	return (0);
}

