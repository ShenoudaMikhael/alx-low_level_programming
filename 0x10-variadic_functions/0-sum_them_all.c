#include <stdarg.h>
/**
 * sum_them_all - sum all args
 * @n: count or args
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res;
	va_list args;

	va_start(args, n);
	res = 0;

	for (i = 0; i < n; ++i)
	{
		res += va_arg(args, int);
	}
	va_end(args);
	return (res);
}
