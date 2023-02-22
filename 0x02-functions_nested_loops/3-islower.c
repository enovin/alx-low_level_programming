#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: the chsracter to the checked
 *
 * Return: 1, if lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
