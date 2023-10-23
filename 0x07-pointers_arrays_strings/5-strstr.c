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
int i, i2, i3;
i = 0;
i3 = 0;
while (haystack[i] != '\0')
{
i2 = 0;

if (i2 == 0 && haystack[i] == needle[0])
{
i3 = i;
while (needle[i2] != '\0' && needle[i2] == haystack[i3])
{

i2++;
i3++;
}
if (needle[i2] == '\0')
{

return (haystack + i);
}
}

i++;
}
if (haystack[i] == '\0' && i3 == 0)
{
return (NULL);
}
return (haystack);
}
