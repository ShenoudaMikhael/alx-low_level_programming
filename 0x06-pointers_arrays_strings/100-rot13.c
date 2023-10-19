#include "main.h"
/**
 * rot13 - replace by +13 char
 * @s: string to manipulate
 * Return: string
 */
char *rot13(char *s)
{
    int i, i2;
    char no[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    char ab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    i = 0;

    while (s[i] != '\n')
    {
        i2 = 0;
        while (s[i2] != '\0')
        {
            if (s[i] == ab[i2])
            {
                s[i] = no[i2];
                break;
            }
            i2++;
        }

        i++;
    }

    return (s);
}