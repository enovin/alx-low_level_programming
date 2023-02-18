#include <stdio.h>

/**
 * main - Prints all the numbers of base 16,
 * followed by a new lin
 *
 * Return: Always (0)
 */

int main(void)
{
	int hex_digit;

	hex_digit = '0';

	while (hex_digit <= '9')
	{
		putchar(hex_digit);
		hex_digit++;
	}

	hex_digit = 'a';

	while (hex_digit <= 'f')
	{
		putchar(hex_digit);
		hex_digit++;
	}

	putchar('\n');

	return (0);
}
