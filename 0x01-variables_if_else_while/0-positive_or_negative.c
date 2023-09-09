#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to a variable n and prints if it is:
 *            - zero
 *            - negative
 *            - positive
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
