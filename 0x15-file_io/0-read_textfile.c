#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - a function that reads a text file and prints to POSIX STDOUT
 * @filename: The filename to be opened
 * @letters: The number of letters to be read and print
 * Return: The number of letters read and printed, or 0 on failure
 */


ssize_t read_textfile(const char *filename, size_t letters)

{
	int openfd, readfd, writefd, open2fd;
	char *temp;

    /* return zero if the file name is null */
	if (filename == NULL)
		return (0);
    /* dynamically allocate memory for the buffer */
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	/* Return zero if the file can not be opened */
    openfd = open(filename, O_RDONLY);
	if (openfd < 0)
	{
		free(temp);
		return (0);
	}

    /* Return zero if the file can not be read */
	readfd = read(openfd, temp, letters);
	if (readfd < 0)
	{
		free(temp);
		return (0);
	}


    /* Write the characters */
	writefd = write(STDOUT_FILENO, temp, readfd);
	free(temp);
	close(openfd);

    /* returning the number of bytes to the main function */
	if (writefd < 0)
		return (0);
	return ((ssize_t)writefd);
}

