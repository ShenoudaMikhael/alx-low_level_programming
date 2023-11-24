#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary for number
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{


	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{

		_putchar('1');
		return;
	}

	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
