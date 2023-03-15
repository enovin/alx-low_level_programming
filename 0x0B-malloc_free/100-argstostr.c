#include <stdlib.h>
#include <stddef.h>

/**
 *argstostr - Concatenates all the arguments of the program
 *
 *@ac: The number of arguments passed to the program
 *@av: An array of strings containing the arguments
 *
 *Return: If ac == 0, av == NULL, or the function fails - NULL.
 *Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	/*Return NULL if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/*Calculate the total length of the strings in av */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /*Account for the newline character */
	}

	/*Allocate memory for the new string */
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	/*Copy the strings in av to the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
