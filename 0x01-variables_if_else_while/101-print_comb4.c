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
int b, d, k;
for (b = 48; b <= 56; b++)
{
for (d = 49; d <= 56; d++)
{
for (k = 50; k <= 56; k++)
{
	if (k > d && d > b)
{
	putchar(b);
	putchar(d);
	putchar(k);
	if (b != 52 || d != 53)
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

