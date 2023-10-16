#include <stdio.h>
#include <limits.h>
/**
 * main - generate random passwords
 * Return: int
 */
int main()
{
    int i;
    i = 0;
    while (i < INT_MAX)
    {
        printf("%d", i);
        i++;
    }

    return 0;
}
