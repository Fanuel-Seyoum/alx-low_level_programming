#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int closefd(int);
/**
 * main - Main function for copy
 * @argc: number of arguments to main function
 * @argv: pointers to the arguments
 * Return: 1 on success, exit on failure
 */
int main(int argc, char *argv[])
{
	char temp[1024];
	int readcount = 0, _EOF = 1, from_fd = -1, to_fd = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closefd(from_fd);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_fd, temp, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			closefd(from_fd);
			closefd(to_fd);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		readcount += _EOF;
		error = write(to_fd, temp, _EOF);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			closefd(from_fd);
			closefd(to_fd);
			exit(99);
		}
	}
	error = closefd(to_fd);
	if (error < 0)
	{
		closefd(from_fd);
		exit(100);
	}
	error = closefd(from_fd);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * closefd - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int closefd(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}