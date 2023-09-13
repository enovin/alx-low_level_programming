#include <stdio.h>

/**
 *main - Prints the sum of even-valued Fibonacci terms that do not exceed 4M.
 *Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next, sum = 2;

	while (1)
	{
		next = a + b;
		if (next > 4000000) /*break the loop if the term exceeds 4,000,000 */
			break;

		if (next % 2 == 0) /*if the term is even-valued, add it to the sum */
			sum += next;

		a = b;
		b = next;
	}

	printf("%lu\n", sum);
	return (0);
}
