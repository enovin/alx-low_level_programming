#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password
 * Return: 0
 */
int main(void)
{
	char password[100];
	int i, sum, rand_num;

	srand(time(0));
	sum = 0;

	for (i = 0; sum < 2772; i++)
	{
		/* Generate a random ASCII character between '!' (33) and '~' (126) */
		rand_num = rand() % 94 + 33;
		password[i] = (char) rand_num;
		sum += rand_num;
	}

	/* Adjust the last character to make the sum exactly 2772 */
	password[i - 1] += (2772 - sum);

	/* Null-terminate the string */
	password[i] = '\0';

	printf("%s\n", password);

	return (0);
}
