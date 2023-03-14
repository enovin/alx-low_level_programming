#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Description: Returns a pointer that points to a newly allocates space in
 * memory which contains the contents of s1, followed by the contents of s2.
 *
 * Return: If memory fails, NULL, otherwise,
 * a pointer to the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, size;
	char *str;

	/* if NULL is passsed, treat as an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* get the length of the two strings */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* allocate memory with malloc */
	size = len1 + len2 + 1;
	str =  malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	/* copy s1, then s2 to str */
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		str[len1] = s1[len1];
	}
	for (len2 = 0; s2[len2] != '\0'; len1++, len2++)
	{
		str[len1] = s2[len2];
	}

	str[len1] = '\0'; /* add null terminator */
	return (str);
}
