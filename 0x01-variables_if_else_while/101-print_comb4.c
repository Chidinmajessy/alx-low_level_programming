#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main()
{
int g = 0, b, d;

while(g <= 9)
{
b = 0;
while(b <= 9)
{
d = 0;
	while(d <= 9)
{
if (g != b && g < b && b != d && b < d)
{
	putchar(g + 48);
	putchar(b + 48);
	putchar(d + 48);
	
	if (g + b + d != 24)
{
	putchar(',');
	putchar(' ');
}
}
g++;
}
b++;
}
d++;
}
	putchar('\n');
return (0);


