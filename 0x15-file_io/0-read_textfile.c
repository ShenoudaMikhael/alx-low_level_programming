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

	f = open(filename, 2);
	if (f == 0 || filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);

	q = read(f, buff, letters);
	for (z = 0; z < q; z++)
	{
		write(1, &buff[z], 1);
	}

	return (q);
}
