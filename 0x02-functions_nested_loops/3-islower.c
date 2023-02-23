#include "main.h"

/**
 * _islower - checks if the character is lower case
 * @c : is the character to be checked
 * Return: 1 if the character is lower case or return 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
