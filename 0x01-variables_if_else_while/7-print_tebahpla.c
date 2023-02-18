#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	lower = 'z';

	while
		(lower >= 'a')
		{
			putchar(lower);
			lower--;
		}
	putchar('\n');
	return (0);
}

