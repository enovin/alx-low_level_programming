#include "main.h"

/**
 *cap_string - Capitalize all words of a string.
 *@s: The string to be capitalized.
 *
 *Return: Pointer to the capitalized string.
 */
char *cap_string(char *s)
{
	int i;

	/*Capitalize first letter if it's a lower-case alphabet */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	/*Iterate through the string */
	for (i = 1; s[i] != '\0'; i++)
	{
		/*Check for separators */
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{ /*Capitalize next letter if it's a lower-case alphabet */
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}

	return (s);
}
