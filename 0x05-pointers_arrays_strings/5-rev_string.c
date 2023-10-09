#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/*Reverse the string */
	len--;	/* Adjust length to match last character's index */

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;

		i++;
		len--;
	}
}
