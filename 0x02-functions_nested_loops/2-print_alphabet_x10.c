#include "main.h"
/*
 * print_alphabet_x10 - prints each of the english alphabet ten times
 *
 * Return: the program returns 0 when successul
 */

void print_alphabet_x10(void)
{
	char lower;
	int counter;

	counter = 0;
	while (counter < 10)
	{
		lower = 'a';
		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');
		counter++;
	}
}

