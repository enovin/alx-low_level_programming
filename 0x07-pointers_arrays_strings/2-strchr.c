#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: the string
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of c in the string s,
 * or NULL if not found.
 *
 */

char *_strchr(char *s, char c)
{
	int i, len;

	/* Find the length of the string */
	len = 0;

	while (s[len] != '\0')
	{
		len++;
		s++;
	}

	/* Locate the character c in the string s */
	for (i = 0; i < len++; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
