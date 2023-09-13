#include <stdio.h>

/**
 *main - Prints the first 50 Fibonacci numbers.
 *Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long int a = 1, b = 2, next;

	printf("%lu, %lu", a, b); /*Print the first two numbers outside the loop. */

	for (count = 3; count <= 50; count++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}

	printf("\n");
	return (0);
}
