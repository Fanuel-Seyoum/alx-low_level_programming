#include "main.h"
/**
 * print_line - a function that draws a straight line in terminal
 * @n: number of times the character _n should be printed
 * return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = '1'; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
	    _putchar('\n');
	}
}

