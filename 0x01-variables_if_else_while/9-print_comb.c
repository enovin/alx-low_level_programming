#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers,
 * separated by a comma and a space
 *
 * Return: Always (0)
 */

int main(void)
{
	int number;

	number = '0';

	while (number <= '9')
	{
		putchar(number);

		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}

		number++;
	}

	putchar('\n');

	return (0);
}
