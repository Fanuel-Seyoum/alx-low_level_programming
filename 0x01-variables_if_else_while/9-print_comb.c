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
	int num_comb;

	for (num_comn = '0'; num_comb <= '9'; num_comb++)
	{
		putchar(num_comb);
		if (num_comb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

