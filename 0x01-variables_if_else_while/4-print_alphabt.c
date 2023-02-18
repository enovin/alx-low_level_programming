#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 * except 'q' and 'e', follwoed by a new line
 *
 * Return: Always (0)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}

		letter++;
	}

	putchar('\n');

	return (0);
}
