#include <stdio.h>

/**
 * main - Print the alphabet in lowercase,
 * then in uppercase followed by a new line
 *
 * Return: Always (0)
 */

int main(void)
{
	char lower_letter;
	char upper_letter;

	lower_letter = 'a';
	upper_letter = 'A';

	while (lower_letter <= 'z')
	{
		putchar(lower_letter);
		lower_letter++;
	}
	while (upper_letter <= 'Z')
	{
		putchar(upper_letter);
		upper_letter++;
	}

	putchar('\n');

	return (0);
}
