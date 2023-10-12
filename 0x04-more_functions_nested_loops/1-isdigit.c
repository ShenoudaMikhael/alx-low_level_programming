/**
 * _isdigit - check if int is a digit
 * @c: inputh char
 *
 * Return: always 0 (success)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 58)
{
return (1);
}
else
{
return (0);
}
}