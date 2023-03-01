#include main.h

/**
 * _strcat - A string that concatenates two strings
 * @src: the string to be appended
 * @dest: the destination string
 *
 * Return: dest (the concatenated string)
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy the source string to the end of the destination string */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}

	/* Add a null terminator to the end of the connected string */
	dest[dest_len] = '\0';

	return (dest);
}
