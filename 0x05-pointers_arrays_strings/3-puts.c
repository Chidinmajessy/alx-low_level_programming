#include "main.h"

/**
 * _puts - printsa string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_puchar(str[i]);
	}
	_putchar('\n');
}
