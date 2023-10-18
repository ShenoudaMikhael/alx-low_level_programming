#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function to compare strings
 * @s1: string one
 * @s2: string two
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
    int i;
    i = 0;

    while (s1[i] != '\0')
    {
        if (s1[i] != s2[i])
        {

            return (s1[i] - s2[i]);
        }

        i++;
    }
    if (s1[i] == '\0' && s2[i] != '\0')
    {
        return (-1 * s2[i]);
    }
    return (0);
}