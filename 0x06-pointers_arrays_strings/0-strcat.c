#include "main.h"
#include <stdio.h>
/**
 * _strcat - concat two strings
 * @dest: destination
 * @src: Source
 * Return: full text
 */
char *_strcat(char *dest, char *src)
{
int i, i2;
i = 0;
i2 = 0;
while (src[i] != '\0')
{
i++;
}

while (i2 != '\0')
{
src[i] = dest[i2];
i++;
i2++;
}
src[i] = '\0';

return (src);
}
