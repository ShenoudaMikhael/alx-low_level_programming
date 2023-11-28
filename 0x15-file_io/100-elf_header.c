#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: arg count
 * @argv: args
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		exit(98);
	}
	return (0);
}
