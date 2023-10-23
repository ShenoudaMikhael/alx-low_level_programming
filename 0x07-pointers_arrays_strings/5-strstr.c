#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i, i2, st;
i = 0;
st = -1;
while (haystack[i] != '\0')
{
if (haystack[i] != needle[i2])
{
i2 = 0;
st = -1;
}
while (needle[i2] != '\0' && haystack[i] == needle[i2])
{
if (i2 == 0)
{
st = i;
}
i2++;
}
if (needle[i2] == '\0')
{

return (haystack + st);
}

i++;
}

return (NULL);
}
