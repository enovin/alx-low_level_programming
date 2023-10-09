#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The number of bytes to copy from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	/* Copy src to dest until n bytes or end of src string */
	while (idx < n && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}

	/* Fill the rest of dest with '\0' */
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
