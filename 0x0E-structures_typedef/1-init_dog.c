#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * struct dog - Listing the detail informationf of my dog
 * @name: my pet's name
 * @age: my pet's age
 * @owner: My name, since I am the owner of my dog
 **
 * Return: Always 0.
 */

struct dog
{
    *d.name;
    char *name;
    float age;
    char *owner
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
