#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copy file
 * @ac: arg count
 * @av: args
 * Return: Always 0.
 */
int main(int argc, char const *argv[])
{
    int file1, file2, strlen, r;
    char *buff;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    file1 = open(argv[1], O_RDONLY);
    if (file1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    file2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
    if (file1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    buff = malloc(sizeof(char) * 1024);
    if (buff == NULL)
        return (-1);
    strlen = read(file1, buff, 1024);
    if (strlen == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    r = write(file2, buff, strlen);
    if (r == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    if (close(file1) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
        exit(100);
    }
    if (close(file2) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
        exit(100);
    }
    return 0;
}
