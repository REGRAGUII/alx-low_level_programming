#include "main.h"
/**
 * create_array - function that creates an array of chars,initializes it
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i = size;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		s[i] = c;
		i--;
	}
	return (s);
}
