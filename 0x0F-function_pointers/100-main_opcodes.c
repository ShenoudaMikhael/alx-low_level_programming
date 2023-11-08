#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int i, n;

    void *mainAddress = (void *)main;
    n = atoi(argv[1]);

    for (i = 0; i < n; i++)
    {
        printf("%02x", ((char *)mainAddress)[i]);
    }

    return 0;
}
