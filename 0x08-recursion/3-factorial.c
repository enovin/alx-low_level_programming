#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number
 *
 * Return: -1 if n < 0, 1 if n = 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
