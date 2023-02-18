#include <stdio.h>

/**
 * main - Prints the alphabet followed by a line
 *
 * Return: Always (0)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
