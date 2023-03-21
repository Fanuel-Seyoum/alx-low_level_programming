#include <stdio.h>
#include <stdlib.h>
// #include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char* name, float age, char* owner)
{
   //Checking if the pointer is pointing to some value
   if (d == NULL)
   {
    printf("This is a NULL pointer");
    return;
   }

//    if ((*d).name == NULL || (*d).owner == NULL) {
//     printf("Error: Either NULL name or owner is passed");
//     return;
//    }
   (*d).name = name;
   (*d).age = age;
   (*d).owner = owner;
}



int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}