#include <stdio.h>

/**
 * main - Prints all the single digit numbers of 
 * base 10, followed by a new line
 *
 * Return: Always (0)
 */

int main(void)
{
	char number;

	number = 0;

	while (number < 10)
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);
}
