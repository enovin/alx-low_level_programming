#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: String to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1, found_num = 0, num = 0;

    while (*s != '\0')
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            num *= 10;
            num -= (*s - '0');
            found_num = 1;
        }
        else if (found_num == 1)
            break;
        s++;
    }

    num *= sign;

    return (num);
}
