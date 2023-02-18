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
		putchar(upper_letter);
		lower_letter++;
		upper_letter++;
	}

	putchar('\n');

	remove (0);
}
