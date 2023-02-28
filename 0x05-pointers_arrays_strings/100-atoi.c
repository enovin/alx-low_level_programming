#include "main.h"

/**
 * _atoi - Convert a string to an integer
 *
 * @s: The string to convert
 *
 * Return: The integer value, or 0 if the string does not contain a valid integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int overflow = 0;

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';

            if (result > INT_MAX / 10)
            {
                overflow = 1;
            }
            else if (result == INT_MAX / 10 && digit > INT_MAX % 10)
            {
                overflow = 1;
            }
            else
            {
                result = result * 10 + digit;

                if (result == INT_MIN)
                {
                    overflow = 1;
                }
                else if (result < INT_MIN)
                {
                    overflow = 1;
                    result = 0;
                }
            }
        }
        else if (*s != '+' || result != 0)
        {
            break;
        }

        s++;
    }

    if (overflow)
    {
        result = 0;
    }
    else
    {
        result *= sign;
    }

    return result;
}
