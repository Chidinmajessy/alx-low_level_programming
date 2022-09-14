#include "main.h"
/**
 * print_sign - function to check for a sign for a number
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_Putchar('+');
		return (1);
	}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
	else
	{
		_putchar('0');
		return (0);
}

