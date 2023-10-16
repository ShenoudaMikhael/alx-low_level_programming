#include "main.h"
/**
 * *_strcpy - copystring
 * @dest: to copy to
 * @src: source vlaue
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (i != '\0')
    {
        *(dest+i) = src[i];
        i++;
    }

    dest[i] = '\0';
    return dest;
}
