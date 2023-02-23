#include "main.h"
/**
 * print_sign - checks for the sign of an integer
 * @n: the integer to be checked
 * Return: 1 and print + if i is positive
 * 0 and prints 0 if the number is zero
 *  -1 and prints - if the number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
