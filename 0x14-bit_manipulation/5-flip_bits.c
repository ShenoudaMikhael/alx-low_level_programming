#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clear bit value
 * @n: pointer
 * @index: int index of bit
 * Return: 1 or -1
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
