#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search within
 * @accept: The characters to include in the prefix
 *
 * Return: Number of bytes in the initial segment of 's' consisting of 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			count++;
		}
		else
		{
			break; /*Stop when a character not in 'accept' is encountered */
		}
	}

	return (count);
}
