#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter
 * @str: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
