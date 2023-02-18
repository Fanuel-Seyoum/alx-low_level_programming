#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char lower;
	char upper;

        lower = 'a';

	upper = 'A';

        while
                (lower <= 'z' && upper <= 'Z')
                {
                        putchar(lower);
			putchar(upper);
                        lower++;
                }
        putchar('\n');
        return (0);
}
