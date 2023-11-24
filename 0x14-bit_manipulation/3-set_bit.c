#include <stdio.h>
/**
 * set_bit - change bit value
 * @n: pointer
 * @index: int index of bit
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int bit;

	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
