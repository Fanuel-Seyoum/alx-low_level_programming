#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* this programs tells if the number is positive, negative or zero*/

/*
 * main - the program tells the sign of an integer
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("ïs zero\n");
	else
		printf("is negative\n");
	/* your code goes there */
	return (0);
}
