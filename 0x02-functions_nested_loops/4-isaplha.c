#include "main.h"

/**
 * _isalpha - Checks for alphabetic letter, uppercase or lowercase
 *
 * @c: the character to be checked
 *
 * Return: 1, if alphabetic, 0, otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
