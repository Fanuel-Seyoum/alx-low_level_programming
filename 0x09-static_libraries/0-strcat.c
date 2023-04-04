<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> 989b5087bea7d7698740075358bedb3aa9abf83f

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
<<<<<<< HEAD
}
=======
}
>>>>>>> 989b5087bea7d7698740075358bedb3aa9abf83f
