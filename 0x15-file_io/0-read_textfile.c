#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
// #include "main.h"


/**
 * read_textfile - a function that reads a text file and prints to POSIX STDOUT
 * @filename: The filename to be open
 * @letters: The number of letters to be read and print
 * Return: The number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters);

#include <stdio.h>
#include <stdlib.h>
// #include "main.h"

/**
 * main - reads and prints the content of a file to the standard output
 * @ac: number of command-line arguments
 * @av: array of command-line arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    /* Check if the program is given one command-line argument */
    if (ac != 2)
    {
        /* Print an error message to the standard error */
        dprintf(2, "Usage: %s filename\n", av[0]);
        /* Exit the program with a non-zero exit status */
        exit(1);
    }
    /* Read and print the first 114 characters of the file */
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    /* Read and print the entire file */
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    /* Exit the program with a zero exit status */
    return (0);
}


ssize_t read_textfile(const char *filename, size_t letters)

{
	int fdo, fdr, fdw;
	char *temp;

    /*
    * return zero if the file name is null
    */
	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	/*
    * return zero if the file can't be opened
    */
    fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}
    /*
    * return zero if the file can't be read
    */
	fdr = read(fdo, temp, letters);
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}

    /*
    * return zero if wrie fails
    */
	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);

    /*
    * return zero if expected amount of byte isn't written
    */
	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}

