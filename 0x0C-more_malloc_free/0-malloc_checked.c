#include "main.h"
/**
 * malloc_checked - function that creates an array of chars
 * @b: first bytes to the memory
 * Return: pointer to the resulting string dests
 */
void *malloc_checked(unsigned int b)
{
	char *s;
	
	s = malloc(b);
	if ( s == NULL)
		exit (98);
	return (s);
}
