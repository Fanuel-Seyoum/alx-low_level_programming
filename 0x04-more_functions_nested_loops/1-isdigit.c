#include "main.h"
/**
 * _isdigit - the function checks if the input is a digit
 * @c: is the character we need to check
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
