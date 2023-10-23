#include <stdio.h>
/**
 * _strpbrk - searches a string for
 * any of a set of bytes.
 * @s:string to search
 * @accept: string to compare
 * Return: pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
int i, i2;
i = 0;
while (s[0] != '\0')
{
i2 = 0;
while (accept[i2] != '\0')
{
if (accept[i2] == s[0])
{
return (s);
}
i2++;
}
s++;
i++;
}
return (NULL);
}
