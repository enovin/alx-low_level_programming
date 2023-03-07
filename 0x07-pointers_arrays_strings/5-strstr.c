#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The string to search for
 *
 * Return: A pointer to the beginning of the located string,
 * or NULL if no such string is found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*haystack == '\0')
	{
		return (haystack);
	}

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(haystack + i + j) != *(needle + j))
				{
					break;
				}
			}
			if (*(needle + j) == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
