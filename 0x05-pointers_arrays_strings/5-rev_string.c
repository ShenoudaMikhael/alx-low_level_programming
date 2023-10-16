#include "main.h"
/**
 * rev_string - everses a string.
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
    int i, j;
    char t;

    i = 0;
    j = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    i--;
    while (i > -1)
    {
        t = s[j];
        s[j] = s[i];
        s[i] = t;

        j++;
        i--;
    }

    return;
}