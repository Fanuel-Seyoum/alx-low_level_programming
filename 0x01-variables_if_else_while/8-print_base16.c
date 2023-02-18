
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
	int num_part;
	char let_part;

	for (num_part = '0'; num_part <= '9'; num_part++)
		putchar(num_part);
	for (let_part = 'a'; let_part <= 'f'; let_part++)
		putchar(let_part);
	putchar('\n');

	return (0);
}
