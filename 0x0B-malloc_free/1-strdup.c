#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory, which
 *contains a copy of the string given as a parameter.
 *
 *@str: the string to duplicate
 *
 *Return: pointer to the duplicated string, or NULL if insufficient memory
 *was available.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	/*get length of string */
	len = 0;
	while (str[len] != '\0')
		len++;

	/*allocate memory for duplicate string */
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	/*copy string to duplicate */
	i = 0;
	while (str[i] != '\0')
	{
		dup_str[i] = str[i];
		i++;
	}

	dup_str[len] = '\0';

	return (dup_str);
}
