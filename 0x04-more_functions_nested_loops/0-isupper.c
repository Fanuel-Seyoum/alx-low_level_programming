#include "main.h"
/**
 * _isupper - a function that checks the case of a letter
 * @c: the character
 * Return: 1 if c is upper case or 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
