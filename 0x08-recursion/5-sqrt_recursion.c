#include "main.h"

/**
 * _sqrt_recursion - Returns rge natural square root of a number.
 * @n: The squared number
 *
 * Return: -1 if n does not have a square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/* handle negative numbers */
		return (-1);
	}
	else if (n == 0)
	{
		/* base case: square root of 0 is 0 */
		return (0);
	}
	else
	{
		return (_sqrt_helper(n, 1));
		/* call helper function to calculate square root */
	}
}

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		/* base case: i has passed the square root of n */
		return (-1);
	}
	else if (i * i == n)
	{
		/* base case: i is the square root of n */
		return (i);
	}
	else
	{
		/* recursive case: increment i and try again */
		return (_sqrt_helper(n, i + 1));
	}
}
