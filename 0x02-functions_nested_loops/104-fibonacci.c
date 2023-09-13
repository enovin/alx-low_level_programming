#include <stdio.h>

/**
 *print_fibonacci - prints two strings as big integers.
 *@a: first string
 *@b: second string
 *
 *Return: nothing
 */
void print_fibonacci(char a[100], char b[100])
{
	int i, carry = 0, fibo[100] = { 0 };

	for (i = 99; i >= 0; i--)
	{
		fibo[i] = (a[i] - '0') + (b[i] - '0') + carry;
		if (fibo[i] > 9)
		{
			fibo[i] %= 10;
			carry = 1;
		}
		else
			carry = 0;
	}

	for (i = 0; i < 100; i++)
		a[i] = b[i];
	for (i = 0; i < 100; i++)
		b[i] = fibo[i] + '0';
}

/**
 *main - prints the first 98 Fibonacci numbers.
 *
 *Return: Always 0.
 */
int main(void)
{
	int i, j, start = 0;
	char a[100] = "1", b[100] = "2";

	printf("%s, %s", a, b);

	for (i = 3; i <= 98; i++)
	{
		print_fibonacci(a, b);

		start = 0;
		for (j = 0; j < 100; j++)
		{
			if (b[j] != '0' && start == 0)
				start = 1;
			if (start)
				putchar(b[j]);
		}

		if (i != 98)
			printf(", ");
	}

	putchar('\n');
	return (0);
}
