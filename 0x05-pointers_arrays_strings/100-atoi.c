#include <stdio.h>
#include "main.h"
/**
 * _atoi - extract numbers from string
 * @s: string to examine
 * Return: int
 */
int _atoi(char *s)
{
    int i, num, neg;
    i = 0;
    num = 0;
    neg = 1;
    while (s[i] != '\0')
    {
        if (s[i - 1] == 45)
        {

            neg *= -1;
        }
        if (s[i] >= 48 && s[i] <= 57)
        {

            num *= 10;
            num += s[i] - 48;
        }
        else if (num != 0)
        {
            break;
        }

        i++;
    }

    return (num * neg);
}
