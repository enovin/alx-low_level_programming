#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the mdestination memory area
 * @src: the source memory area
 * @n: the number of bytes to copy from src to dest
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (p);
}
