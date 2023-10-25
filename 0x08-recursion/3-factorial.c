/**
 * factorial - returns the factorial of a given number.
 * @n: int
 * Return: int
 */
int factorial(int n)
{
int f;
f = n;
if (n < 0)
{
return (-1);
}
if (f > 0)
{
f = f * factorial(n - 1);
}
if (f == 0)
{
return (1);
}
return (f);
}
