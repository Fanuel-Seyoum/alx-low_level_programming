#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

int main(void)
{

    char *c = (char*) malloc_checked(sizeof(char) * 9 );
    printf("%p\n", (void *)c);
    int *i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    float *f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    double *d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    printf("The size used by the char is %lu\n", (sizeof(c)));
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}