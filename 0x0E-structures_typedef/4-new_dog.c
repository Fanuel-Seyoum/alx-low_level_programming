#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */


dog_t *new_dog(char *name, float age, char *owner) {
    // Allocate memory for the new dog
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL; // Failed to allocate memory
    }
    // Copy the name and owner strings
    char *name_copy = malloc(strlen(name) + 1);
    if (name_copy == NULL) {
        free(new_dog);
        return NULL; // Failed to allocate memory
    }
    strcpy(name_copy, name);
    char *owner_copy = malloc(strlen(owner) + 1);
    if (owner_copy == NULL) {
        free(new_dog);
        free(name_copy);
        return NULL; // Failed to allocate memory
    }
    strcpy(owner_copy, owner);
    // Initialize the new dog
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;
    return new_dog;
}

int main(void) {
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog == NULL) {
        printf("Failed to create new dog\n");
        return 1;
    }
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);
    return 0;
}
