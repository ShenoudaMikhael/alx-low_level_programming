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
i = 0;

while (s[i] != '\0')
{
i2 = 0;
while (accept[i2] != '\0')
{

if (s[i] == accept[i2] && i == c)
{
c++;
}
i2++;
}

i++;
}
return (c);
}
