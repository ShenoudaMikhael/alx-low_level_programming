/**
 * _is_divisable - cheks for n is divisable by i
 * @n: int number to check
 * @i: int divisor
 * Return: int 1 for prime , 0 for non prime
 */
int _is_divisable(int n, int i)
{
if (i <= n / 2)
{
if (n % i == 0)
{

return (0);
}
}
else
{
return (1);
}
return _is_divisable(n, i + 1);
}
/**
 * is_prime_number - cheacks if
 * number is prime number
 * @n: number to check
 * Return: 1 ( prime ) 0 ( not prime )
 */
int is_prime_number(int n)
{
int res;
res = 0;
if (n <= 0 || n == 1 )
{
return (0);
}

res = _is_divisable(n, 2);
return (res);
}
