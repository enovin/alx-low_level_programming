#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char base16;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			/* Convert integer to its ASCII representation for 0-9 */
			base16 = i + '0';
		else
			/* Convert for characters a-f */
			base16 = (i - 10) + 'a';

		putchar(base16);
	}

	putchar('\n');

	return (0);
}

