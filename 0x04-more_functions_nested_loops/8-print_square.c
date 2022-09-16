#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (width = 0; width < size; width++)
		{
			for (height = 0; height < size; height++)
			_putchar('#');
			_putchar('\n');
		}
	}
}
