#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat- Concatenates n bytes of a string too another string
 * @s1: head string
 * @s2: tail string
 * @n : number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	i = strlen(s1);
	j = strlen(s2);

	if (n > j)
		n = j;
	s = malloc((i + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		s[len1] = s1[len1];
	}
	for (len2 = 0; len2 < n; len1++, len2++)
	{
		s[len1] = s2[len2];
	}
	s[len1] = '\0';
	return (s);
}
