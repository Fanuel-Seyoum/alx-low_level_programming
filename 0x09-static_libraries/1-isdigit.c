<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> 989b5087bea7d7698740075358bedb3aa9abf83f

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
<<<<<<< HEAD
}
=======
}
>>>>>>> 989b5087bea7d7698740075358bedb3aa9abf83f
