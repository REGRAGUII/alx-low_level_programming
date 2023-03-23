#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @c: char to be checked
 *
 * Return: 1 for a character that will ba a digit or 0 for any else
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
