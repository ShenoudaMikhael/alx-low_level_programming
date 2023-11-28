#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copy file
 * @argc: arg count
 * @av: args
 * Return: Always 0.
 */
int main(int argc, char const *av[])
{
	char *buff;

	int file1, file2, r, strlen = 1024;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = open(av[1], O_RDONLY);
	if (file1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (-1);
	while (strlen == 1024)
	{
		strlen = read(file1, buff, 1024);
		if (strlen == -1)
		{
			free(buff);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		r = write(file2, buff, strlen);
		if (r != strlen || r == -1)
		{
			free(buff);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(file1) == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
