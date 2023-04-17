#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that creates a text file and prints to POSIX STDOUT
 * @filename: The filename to be opened
 * @letters: The number of letters to be read and print
 * Return: The number of letters read and printed, or 0 on failure
 */


int create_file(const char *filename, char *text_content)
{
    int openfd, writecounter, len;

	if (filename == NULL)
		return (-1);

    if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	openfd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
    
    writecounter = write(openfd, text_content, len);

    if (fd < 0 || writecounter < 0)
    {
        return (-1);
    }
	close(openfd);
	return (1);
}