
#include "main.h"
/**
 * _strncpy - function to copy n of string bytes
 * @deat: destination
 * @src: source
 * @n: number of bytes to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {

        dest[i] = '\0';

        i++;
    }
    return (dest);
}
