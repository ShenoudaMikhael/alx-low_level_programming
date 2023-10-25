/**
 * _strlen_recursion - returns the length of a string
 * @s: pointr to a string
 * Return: int
 */
int _strlen_recursion(char *s)
{
int l;
l = 0;
if (*s != '\0')
{
l = 1 + _strlen_recursion(s + 1);
}
return (l);
}
