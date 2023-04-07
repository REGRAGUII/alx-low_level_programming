#include "main.h"
/**
 * _strlen_recursion - functiono that return the length of a string
 * @s : char input
 *Return: the length ofo the string
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	a = ((*s != '\0') ? 1 + _strlen_recursion(s + 1) : 0);
	return (a);
}

