#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 *
 * @n: The integer to be processed
 *
 * Return: The last digit of the integer n
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
