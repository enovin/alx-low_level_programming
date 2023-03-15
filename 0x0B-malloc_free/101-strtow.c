#include <stdlib.h>

/**
 *count_words - Counts the number of words in a string.
 *@str: The string to count words in.
 *
 *Return: The number of words in str.
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 *free_words - Frees memory allocated for an array of words.
 *@words: The array of words to free.
 */
void free_words(char **words)
{
	int i;

	for (i = 0; words[i]; i++)
		free(words[i]);

	free(words);
}

/**
 *strtow - Splits a string into words.
 *@str: The string to split.
 *
 *Return: A pointer to an array of strings (words)
 *or NULL if str == NULL or *str == "" or if memory allocation fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, nwords;

	if (str == NULL || *str == '\0')
		return (NULL);

	nwords = count_words(str);
	words = malloc(sizeof(char *) * (nwords + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; j < nwords; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			continue;

		len = 0;

		while (str[i + len] && str[i + len] != ' ' &&
			str[i + len] != '\t' && str[i + len] != '\n')
			len++;

		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
		{
			free_words(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[j][k] = str[i + k];

		words[j][k] = '\0';
		j++;
		i += len;
	}

	words[j] = NULL;
	return (words);
}
