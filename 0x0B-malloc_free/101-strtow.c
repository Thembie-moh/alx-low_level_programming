#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - The functuon will mark the index
 * @str: the string will be searched
 * Return: The index will be returned
 */
int word_len(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}
	return (length);
}
/**
 * count_words - The function counts the num of words
 * @str: The string searched
 * Return: The num of words
 */
int count_words(char *str)
{
	int index = 0, words = 0, length = 0;

	for (index = 0; *(str + index); index++)
		length++;

	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - The string will be seperated into words
 * @str: the string spliter
 * Return: the string spliter
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, t, le_tters, p;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (t = 0; t < words; t++)
	{
		while (str[index] == ' ')
			index++;

		le_tters = word_len(str + index);
		strings[t] = malloc(sizeof(char) * (le_tters + 1));

		if (strings[t] == NULL)
		{
			for (; t >= 0; t--)
				free(strings[t]);
			free(strings);
			return (NULL);
		}

		for (p = 0; p < le_tters; p++)
			strings[t][p] = str[index++];
		strings[t][p] = '\0';
	}
	strings[t] = NULL;

	return (strings);
}

