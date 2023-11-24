/**
 * get_bit - get bit at index
 * @n: int to get bit from
 * @index: index of bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int q;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	q = 1UL << index;
	return ((n & q) ? 1 : 0);
}
