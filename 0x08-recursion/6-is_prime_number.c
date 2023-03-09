#include "main.h"

/**
 *is_prime_number - returns 1 if the input integer is a prime number,
 *otherwise return 0
 *@n: The number to check
 *
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		/*1 and negative numbers are not prime */
		return (0);
	}
	else
	{
		/*call helper function to check for primality */
		return (is_prime_helper(n, 2));
	}
}

/**
 *is_prime_helper - helper function to check for primality
 *@n: The number to check
 *@i: The factor to check
 *
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_helper(int n, int i)
{
	if (i == n)
	{
		/*base case: we have checked all possible factors */
		return (1);
	}
	else if (n % i == 0)
	{
		/*base case: n is divisible by i, so it's not prime */
		return (0);
	}
	else
	{
		/*recursive call with incremented factor */
		return (is_prime_helper(n, i + 1));
	}
}
