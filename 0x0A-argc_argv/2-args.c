#include <stdio.h>

/**
 * main - Entry point
 * @argc: The argument counter
 * @argv: The argument vector
 *
 * Description: A program that prints all the arguments passed to it including
 * the first one. All the arguments will be printed on a new line, followed
 * by a new line.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
