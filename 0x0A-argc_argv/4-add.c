#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
* main - adds two positive number
* @argc: number of arguments
* @argv: array of arguents
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1);
	{
		
	for (i = 1; i < argc; i++)
	{
		int b;
		char *str;
		
		str = argv[i];
		for (b = 0; str[b] != '\0'; b++)
		{
			if (str[b] > 57 || str[b] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	}
	for (i = 1; i < argc; i++)
	{
		sum = _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
