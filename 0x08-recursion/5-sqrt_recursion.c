#include <stdio.h>

/**
 * checkrs - check for the value of sqrt
 * @n2: number after sub
 * @b: sqrt result
 * @z: odd numbers increiment
 * Return: int
*/
int checkrs(int n2, int b, int z)
{

if (n2 - (z) == 0)
{

return (b);
}
if ((n2) > 0)
{

b = checkrs(n2 - z, b + 1, z + 2);
}

if (n2 < 0)
{
return (-1);
}
return (b);
}

/**
 * _sqrt_recursion - returns the natural
 * square root of a number.
 * @n: int
 * Return: int square root
 */
int _sqrt_recursion(int n)
{
int q, b, z;
z = 1;
q = 0;
b = 1;
q = n;
if (n == 1)
{
return (1);
}
b = checkrs(q - 1, b + 1, z + 2);
return (b);
}
