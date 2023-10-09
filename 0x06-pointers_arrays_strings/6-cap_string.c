#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: A pointer to the string.
 *
 * Return: A pointer to the string after converting.
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= ('a' - 'A');

	while (s[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= ('a' - 'A');
			}
		}

		i++;
	}

	return (s);
}
