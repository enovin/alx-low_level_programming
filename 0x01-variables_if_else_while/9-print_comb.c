#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space.
 * Numbers should be printed in ascending order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
