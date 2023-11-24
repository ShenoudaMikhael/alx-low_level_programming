#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary for number
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int displayMask = 1 << 31;
	unsigned int i = 1;
	unsigned int l = 32;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (displayMask > n)
	{
		displayMask >>= 1;
		l--;
	}
	for (i = 1; i <= l; ++i)
	{
		_putchar(n & displayMask ? '1' : '0');
		n <<= 1;
	}
}
