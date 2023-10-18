#include "main.h"
/**
 * _strncat - use at most n bytes from
 *      and add to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, i2;
i = 0;
i2 = 0;
while (dest[i] != '\0')
{
i++;
}

while (i2 < n)
{
dest[i] = src[i2];
i++;
i2++;
}

return (dest);
}
