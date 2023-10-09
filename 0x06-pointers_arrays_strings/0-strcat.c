#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/* Find the length (index of the null byte) of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy the characters from src to dest starting from the null byte of dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Append the null byte at the end */
	dest[dest_len + i] = '\0';

	return (dest);
}
