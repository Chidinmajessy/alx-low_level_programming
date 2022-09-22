#include "main.h"

/**
 *infinite_add - c function that adds two numbers stored
 *in strings to a buffer
 *Assume that strings are never empty and
 *numbers will always be positive or 0
 *Assumes there are only digits stored in the number strings
 *If result can be stored in the buffer
 *returns a pointer to the result
 *If results cannot be stored in the buffer, returns '0'.
 *@n1: first number to be added
 *@n2: second num ber to be added
 *@r: store result
 *@size_r: size of buffer
 *Return: return pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - adds the numbers stored in two strings
 * @n1: the string containing the first number to be added
 * @n2: the string containing the second number to be added
 * @r: the buffer to store the result
 * @r_index: the current index of the buffer
 *
 * Return: if r can store the sum - a pointer to the result
 *		if r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (;  *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	
	else if (tens && r_index < 0)
		return (0);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = o, n2_len = 0;
	
	for (index = 0; *(n1 + index); index++)
		n1_len++;
	
	for (index = 0; *n2 + index); index++)
		n2_len++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);
	n1 += n1_len -1;
	n2 += n2_len -1;
	*(r + size_r) ='\0';
	
	return (add_strings(n1, n2, r, --size_r));
}
