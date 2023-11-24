#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip bit value
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: int count of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	int i, count = 0;

	bit = m ^ n;
	for (i = 63; i >= 0; i--)
	{

		if ((bit >> i) & 1)
			count++;
	}

	return (count);
}
