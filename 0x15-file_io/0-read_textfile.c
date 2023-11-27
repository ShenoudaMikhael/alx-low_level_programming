#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{

    int f, q;
    size_t z;
    char *buff;

    f = open(filename, 2);
    buff = malloc(sizeof(char) * letters);

    q = read(f, buff, letters);
    for (z = 0; z < letters; z++)
    {
        write(1, &buff[z], 1);
    }

    return (q);
}
