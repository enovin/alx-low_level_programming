#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point for program to generate passwords for 101-crackme
 *
 *Return: 0 upon successful exit
 */
int main(void)
{
	/*Declare variables */
	int sum = 0, i = 0, diff_half1 = 0, diff_half2 = 0;
	char password[100];

	/*Set the seed for rand() based on current time */
	srand(time(0));

	/*Generate 4 random numbers and add them up */
	while (sum < 2772)
	{
		password[i] = rand() % 10 + 48;
		sum += password[i];
		i++;
	}

	/*Compute the difference between the sum and 2772 */
	diff_half1 = sum - 2772;

	/*Generate 2 random numbers and add them up */
	while (diff_half2 < diff_half1)
	{
		password[i] = rand() % 10 + 48;
		diff_half2 += password[i];
		i++;
	}

	/*Compute the difference between the second half sum and first half sum */
	diff_half2 -= diff_half1;

	/*Add the remaining characters to password */
	password[i++] = diff_half2 / 10 + 48;
	password[i++] = diff_half2 % 10 + 48;

	/*Add null terminator to password */
	password[i] = '\0';

	/*Output generated password */
	printf("%s", password);

	return (0);
}
