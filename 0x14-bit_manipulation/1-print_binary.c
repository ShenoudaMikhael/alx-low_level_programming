#include "main.h"
/**
 * print_binary - print binary for number
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int base = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	base = 1 << 31;

	while (base > n)
	{
		base >>= 1;
	}

	while (base > 0)
	{

		if (n > base)
		{
			_putchar('1');
			n -= base;
		}
		else
		{
			_putchar('0');
		}
		base >>= 1;
	}
}
