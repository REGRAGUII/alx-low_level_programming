#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the pointer of the string
 *
 * Return: len
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
