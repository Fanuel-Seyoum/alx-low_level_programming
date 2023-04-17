#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments
 * Return: 1 on success , exit 97, 98, 99, 100 on error
 */
int main(int ac, char **av)
{
	int status1, status2, read_counter, write_counter, openfd, openfd2;
	char buffer[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	openfd = open(av[1], O_RDONLY);
	if (openfd < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	openfd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (openfd2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((read_counter = read(openfd, buffer, BUFSIZ)) > 0)
	{
		write_counter = (write(openfd2, buffer, read_counter));
		if (write_counter != read_counter)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (read_counter < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	status1 = close(openfd);
	if (status1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close openfd %d\n", fd), exit(100);
	status2 = close(openfd2);
	if (status2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openfd2), exit(100);
	return (0);
}