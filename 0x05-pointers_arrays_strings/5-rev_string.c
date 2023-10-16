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
    while (i != j)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;

        j++;
        i--;
    }

    return;
}