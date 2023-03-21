#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog*d)
{
	if (d != NULL)
	{
		printf("Name: %s\n",(*d).name ? (*d).name : "(nill)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nill)");
	}
}
