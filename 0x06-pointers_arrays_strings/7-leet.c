#include "main.h"
#include <stdio.h>
/**
 * leet - change string to 1337
 * @s: string
 * Return: char
 */
char *leet(char *s)
{
int i, r;
char a[5] = {97, 101, 111, 116,108};
char b[5] = {52, 51, 48, 55, 49};
i = 0;
while (s[i] != '\0')
{
for (r = 0; r < 5; r++)
{
if (s[i] == a[r] || s[i] == (a[r] - 32))
{

s[i] = b[r];
}
}

i++;
}
return (s);
}
