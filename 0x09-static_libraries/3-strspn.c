
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
int i, i2;

i = 0;
while (s[i] != '\0')
{

i2 = 0;
/*
 * go throught the accept till end
 * or stop when you have your first match
 */
while (accept[i2] != '\0' && s[i] != accept[i2])
{

i2++;
}
if (accept[i2] == '\0')
{
return (i);
}
i++;
}
return (i);
}
