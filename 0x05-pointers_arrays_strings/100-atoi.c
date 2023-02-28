/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string, or 0 if no valid number is found.
 */
int _atoi(char *s)
{
    int sign = 1, num = 0;
    char c;

    while (*s)
    {
        c = *s;
        if (c == '-')
            sign = -sign;
        else if (c >= '0' && c <= '9')
            num = num * 10 + (c - '0');
        else if (num != 0)
            break;
        s++;
    }

    return sign * num;
}
