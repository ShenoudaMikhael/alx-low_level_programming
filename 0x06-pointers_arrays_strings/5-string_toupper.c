#include "main.h"
/**
 * string_toupper - convert string to upper
 * @s: string convert
 * Return: char
 */
char *string_toupper(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = (s[i] - 32);
}
i++;
}
return (s);
}
