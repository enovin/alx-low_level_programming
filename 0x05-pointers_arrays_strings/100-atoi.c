#include <limits.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
			{
				if (sign == 1)
				{
					return (INT_MAX);
				}
				else
				{
					return (INT_MIN);
				}
			}
			res = res * 10 + (s[i] - '0');
		}
		i++;
	}
	return (sign * res);
}
