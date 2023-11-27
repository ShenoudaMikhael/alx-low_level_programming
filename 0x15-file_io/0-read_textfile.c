#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - read text file and print it
 * @filename: ptr to file name
 * @letters: number of letters to print
 * Return: int printed characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int f;
	size_t z, q;
	char *buff;

	if (letters == 0 || filename == NULL)
		return (0);

	f = open(filename, 2);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(f);
		return (0);
	}
	q = read(f, buff, letters);
	if (q == 0)
	{
		free(buff);
		close(f);
		return (0);
	}

	for (z = 0; z < letters; z++)
	{
		write(1, &buff[z], 1);
	}
	close(f);
	return (q);
}
