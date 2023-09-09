#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third;

	for (first = 48; first <= 55; first++)
	{
		for (second = first + 1; second <= 56; second++)
		{
			for (third = second + 1; third <= 57; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if (first != 55 || second != 56 || third != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

