#include <stdlib.h> // for malloc and free

void *_calloc(unsigned int nmemb, unsigned int size) {
    // Calculate the total amount of memory needed
    unsigned int total_size = nmemb * size;

    // Allocate the memory
    void *ptr = malloc(total_size);

    // Check if malloc was successful
    if (ptr == NULL) {
        return NULL;
    }

    // Set the memory to zero using a loop
    char *temp_ptr = ptr;
    for (unsigned int i = 0; i < total_size; i++) {
        temp_ptr[i] = 0;
    }

    // Return a pointer to the allocated memory
    return ptr;
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}











// void *_calloc(unsigned int nmemb, unsigned int size)
// {
// 	unsigned int i = 0;
// 	char *space;

// 	if (nmemb == 0 || size == 0)
// 		return (NULL);

// 	space = malloc(nmemb * size);
// 	if (space == NULL)
// 		return (NULL);

// 	for (; i < nmemb * size; i++)
// 		*(space + i) = 0;

// 	return (space);
// }


