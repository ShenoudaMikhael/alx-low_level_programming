#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int i, n;

    void *mainAddress = (void *)main;
    n = atoi(argv[1]);
    if (argc != 2)
    {
        printf("Erorr\n");
        exit(1);
    }
    if (n < 0)
    {
        printf("Erorr\n");
        exit(2);
    }
    for (i = 0; i < n; i++)
    {
        printf("%02hhx ", ((char *)mainAddress)[i]);
    }
    printf("\n");
    return 0;
}
