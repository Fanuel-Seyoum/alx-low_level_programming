#include "main.h"


/**
 * read_textfile - a function that reads a text file and prints to POSIX STDOUT
 * @filename: The filename to be opened
 * @letters: The number of letters to be read and print
 * Return: The number of letters read and printed, or 0 on failure
 */


ssize_t read_textfile(const char *filename, size_t letters)

{
	int openfd;
    ssize_t readcount, writecount=0;
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
		free (temp);
        return (0);
	}

    /* Return zero if the file can not be read */
	readcount = read(openfd, temp, letters);
	if (readcount < 0)
	{
		free(temp);
        close(openfd);
		return (0);
	}


    /* Write the characters */
	writecount = write(STDOUT_FILENO, temp, readcount);
    /* returning zero if write counter fails */
	if (writecount < 0)
    {
        free (temp);
        close (openfd);
        return (0);
    }
    
    /* returning the number of bytes to the main function */
	close(fd);
    free(temp);
    return ((ssize_t)writecount);
}

