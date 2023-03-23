#include "main.h"
/*
 * _isdigit(int c) - check for a digit
 * @c : char to check
 *
 *Return: 1 for a digit or 0 if not
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
