#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

main(void)

int g;
int b;
int d;
int k;
	
while (g <= 999)
{
b = (g / 100 + '0') ;
d = (g / 10 % 10 + '0');
k = (g % 10 + '0');
if ((b < d) && (d < k))
{
	putchar(b);
	putchar(d);
	putchar(k);
	if (g != 789)
{
	putchar(',');
	putchar(' ');
}
}
c++
    }
    putchar('\n');
return (0);


