#include "main.h"
/**
 * _isalpha - this function checks for an alphabetic character
 * @c: the value that will be checked
 * Return: returns 1 if c is a letter or 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
