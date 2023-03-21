#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Listing the detail informationf of my dog
 * @name: my pet's name
 * @age: my pet's age
 * @owner: My name, since I am the owner of my dog
 *
 * Description: The struct below is the detial information about my dog.
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char* name, float age, char* owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

