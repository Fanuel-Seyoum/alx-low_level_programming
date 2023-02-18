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
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower'\n');
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper'\n');
	return (0);
}
