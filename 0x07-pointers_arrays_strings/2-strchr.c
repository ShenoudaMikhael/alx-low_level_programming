#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to
 * the first occurrence of the character
 * c in the string s, or NULL
 * if the character is not found
 * @s: char array
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
char *q;

if (s == NULL)
{
return (NULL);
}
for (q = s; *q; q++)
{
if (*q == c)
{
return (q);
}
}

return (NULL);
}
