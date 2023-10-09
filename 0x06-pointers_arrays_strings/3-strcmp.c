#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Negative value if s1 < s2.
 *        0 if s1 == s2.
 *        Positive value if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
