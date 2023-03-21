#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name ? (*d).name : "(nill)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nill)");
	}
}
