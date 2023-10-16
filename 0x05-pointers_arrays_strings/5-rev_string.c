#include "main.h"
/**
 * rev_string - everses a string.
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
    int i, j;
    char *temp;
    i = 0;
    j = 0;
    temp = 0;
    while (s[i] != '\0')
    {

        i++;
    }
    i--;

    while (i != -1)
    {
        temp[j] = s[i];
        i--;
        j++;
    }
    return;
}