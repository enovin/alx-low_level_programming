#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to string
 *
 * Return: Integer value of string
 */
int _atoi(char *s)
{
    int sign = 1, res = 0, digit;

    while (*s)
    {
        if (*s == '-' || *s == '+')
        {
            if (*s == '-')
                sign *= -1;
            s++;
            break;
        }
        if (*s >= '0' && *s <= '9')
            break;
        s++;
    }

    while (*s && (*s >= '0' && *s <= '9'))
    {
        digit = *s - '0';
        res = res * 10 + sign * digit;
        s++;
    }

    return (res);
}
