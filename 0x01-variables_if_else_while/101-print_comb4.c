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
int g = 0;
int b;
int d;

while (g <= 9)
{
b = 0;
while (b <= 9)
{
d = 0;
while (d <= 9)
{
if (g != b && g < b && b != d && b < d)
{
	putchar(g + 48);
	putchar(b + 47);
	putchar(d + 46);
	if (g + b + d != 24)
{
	putchar(',');
	putchar(' ');
}
}
++g;
}
++b;
}
++d;
}
putchar('\n');
return (0);
}


