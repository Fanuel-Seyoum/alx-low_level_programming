// #include "main.h"
#include <stdlib.h>

// /**
//  * create_array - A function that creates an array of chars,
//  * and initializes it with a specific char.
//  * @size: The size of the array
//  * @c: A character to initialized the array
//  * Return: Apointer to the array or NULL if it fails
//  */
// char *create_array(unsigned int size, char c)
// {
// 	char *s;
// 	unsigned int i = 0;

// 	s = malloc(size * sizeof(char));

// 	if (s == NULL)
// 		return (NULL);

// 	if (size == 0)
// 		return (NULL);

// 	while (i < size)
// 	{
// 		s[i] = c;
// 		i++;
// 	}
// 	return (s);
// }



#include <stdio.h>
#include <limits.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    char *s;
    int i;

    i = 0;
    while (1)
    {
        s = malloc(INT_MAX);
        if (s == NULL)
        {
            printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
            return (1);
        }
        s[0] = 'H';
        i++;
    }
    return (0);
}