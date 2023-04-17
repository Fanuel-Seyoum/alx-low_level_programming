#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a text file
 * @filename: The filename to be opened
 * @text_content: String
 * Return: The number of letters read and printed, or 0 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int openfd, writecounter, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	openfd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writecounter = write(openfd, text_content, length);
	if (openfd < 0 || writecounter < 0)
	{
		return (-1);
	}
	close(openfd);
	return (1);
}
