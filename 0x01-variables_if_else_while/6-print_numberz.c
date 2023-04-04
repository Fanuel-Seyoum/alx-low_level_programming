#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int num_list;

	for (num_list = '0'; num_list <= '9'; num_list++)
		putchar(num_list);
	putchar('\n');
	return (0);

}
