#include "main.h"
 /**
  *_isalpha - Shows 1 if the input is a letter another case 0
  *
  *@c: the character in ASCII code
  *
  * Return: 1 fo letters. 0 for the rest
  */
int _isalpha(int c);
{
	if ((c <= 65 && c >= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_purchar('\n');
}
