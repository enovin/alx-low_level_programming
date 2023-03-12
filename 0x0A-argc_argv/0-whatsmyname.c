#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints its own name followed by a new line.
 * If the program is renamed, it should print its new name.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
