#include "main.h"
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
    int s1c;
    s1c = 0;
    while (s1[i] != '\n')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}