#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_idx = 0;
	int src_idx = 0;

	/* Find the terminating null byte of dest
	while (dest[dest_idx] != '\0') */
	{
		dest_idx++;
	}

	/* Copy characters from src to dest */
	while (src[src_idx] != '\0' && src_idx < n)
	{
		dest[dest_idx] = src[src_idx];
		dest_idx++;
		src_idx++;
	}

	/* Terminate the dest string */
	dest[dest_idx] = '\0';

	return (dest);
}
