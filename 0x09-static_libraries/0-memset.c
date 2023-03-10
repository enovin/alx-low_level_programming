#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Address to fill with a constant byte
 * @b: the constant byte
 * @n: the first number of bytes to fill
 *
 * Description: The _memset() function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}

	return (s);
}
