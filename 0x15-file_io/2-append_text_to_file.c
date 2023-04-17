#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: file name pointer.
 * @text_content: the string to be appended.
 *
 * Return: -1 if function fails or filename is null.
 *         -1 if the file doesn't exist or user doesn't have permission.
 *          returns 1 if successful .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfd, writecounter, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	openfd = open(filename, O_WRONLY | O_APPEND);
	writecounter = write(openfd, text_content, length);

	if (openfd == -1 || writecounter == -1)
		return (-1);

	close(openfd);

	return (1);
}
