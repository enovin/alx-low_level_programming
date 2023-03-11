#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy n number of characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	/* Add a null terminator to the end of the connected string */
	dest[dest_len] = '\0';

	return (dest);
}
