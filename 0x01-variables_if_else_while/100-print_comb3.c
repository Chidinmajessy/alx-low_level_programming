#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
	
{
	int b, d;
	for (b = 48; b <= 56; b++)
{	
	for (d = 49; d <= 57; d++)
{
	if (d> b)
{
	putchar(b);
	putchar(d);
	if (b != 56 || d != 57)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

