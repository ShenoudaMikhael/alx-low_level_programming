
#include "main.h"
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
    while (dest[i] != '\0')
    {
        i++;
    }

    while ((i2 < n && src[i2] != '\0'))
    {
        dest[i] = src[i2];
        i++;
        i2++;
    }

    return (dest);
}