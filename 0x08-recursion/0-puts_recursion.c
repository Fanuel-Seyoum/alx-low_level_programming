#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @mystring: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *mystring)
{
	if (*mystring)
	{
		_putchar(*mystring);
		_puts_recursion(mystring + 1);
	}
	else
		_putchar('\n');
}
