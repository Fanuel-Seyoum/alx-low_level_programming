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
    int openfd;
	size_t i = 0;
	ssize_t write_counter;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		openfd = open(filename, O_CREAT, 0700);
		if (openfd < 0)
			return (-1);
		return (1);
	}
	openfd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (openfd < -1)
		return (-1);
	/* finding the length of a text_content string */
	while (text_content[i] != 0)
		i++;
	write_counter = write(openfd, text_content, i);
	if (write_counter < -1)
		return (-1);
	close(openfd);
	return (1);
}