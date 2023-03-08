#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * in reverse followed by a new line.
 * @mystring: An input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *mystring)
{
	if (*mystring)
	{
		_print_rev_recursion(mystring + 1);
		_putchar(*mystring);
	}
}
