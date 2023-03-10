#include "main.h"
<<<<<<< HEAD
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

=======

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
>>>>>>> 989b5087bea7d7698740075358bedb3aa9abf83f
