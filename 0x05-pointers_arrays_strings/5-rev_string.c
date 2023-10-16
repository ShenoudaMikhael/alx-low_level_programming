#include "main.h"
/**
 * rev_string - everses a string.
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
    int i, j;
    int qqq[100];

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        qqq[i] = s[i];
        i++;
    }
    i--;
    while (i > -1)
    {
        s[j] = qqq[i];
        i--;
        j++;
    }

    return;
}