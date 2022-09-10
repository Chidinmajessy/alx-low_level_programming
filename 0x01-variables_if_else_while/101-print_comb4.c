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
for (b = 48; b <= 58; b++)
{
for (d = 49; d <= 58; d++)
{
for (k = 50; k <= 58; k++)
{
	if (k > d && d > b)
{
	putchar(b);
	putchar(d);
	putchar(k);
	if (b != 53 || d != 54 || k !=56)
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

