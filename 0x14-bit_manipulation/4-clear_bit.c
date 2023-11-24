#include <stdio.h>
/**
 * clear_bit - clear bit value
 * @n: pointer
 * @index: int index of bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	bit = 1 << index;
	*n = ~(*n | bit);
	return (1);
}
