#include <stdio.h>
/**
 * _strspn - gets the length of
 * a prefix substring.
 * @s: char
 * @accept: string
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, i2, c;
int lasti;

i = 0;
lasti = 0;
while (s[i] != '\0')
{
i2 = 0;
while (accept[i2] != '\0')
{

if (s[i] == accept[i2])
{
lasti++;
if (lasti != 0 && lasti != (i + 1))
{
return (c);
}
printf("i:%d i2:%d %d %d\n", i, i2, s[i] + '0', accept[i2] + '0');
c++;
}
i2++;
}

i++;
}
return (c);
}
