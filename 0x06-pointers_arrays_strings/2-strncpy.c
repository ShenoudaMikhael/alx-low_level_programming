
#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function to copy n of string bytes
 * @deat: destination
 * @src: source
 * @n: number of bytes to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i, i2;
    i = 0;
    i2 = 0;
    while (src[i] != '\0')
    {
        i++;
    }

    while (i2 < n)
    {
        if (dest[i] < 0)
        {
            break;
        }
        dest[i2] = src[i2];

        i2++;
    }

    return (dest);
}