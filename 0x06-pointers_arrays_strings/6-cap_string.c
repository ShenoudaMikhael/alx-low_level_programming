#include "main.h"
/**
 * cap_string - captilize string
 * @s: string
 * Return: char
 */
char *cap_string(char *s)
{
int i, sep;

char a[13] = {
'\t', ' ', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};
i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122 && i == 0)
{
s[i] = s[i] - 32;
}

for (sep = 0; sep < 13; sep++)
{
if (s[i] == a[sep])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
i++;
}
return (s);
}
