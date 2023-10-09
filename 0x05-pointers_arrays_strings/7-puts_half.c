#include "main.h"

/**
 *puts_half - Prints the second half of a string.
 *@str: The string to be halved and printed.
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	/*Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/*Determine the starting point to print from */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2 + 1;	/* Adjust for odd-length strings */
	}

	/*Print the second half of the string */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
