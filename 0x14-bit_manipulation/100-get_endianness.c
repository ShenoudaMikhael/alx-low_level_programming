/**
 * get_endianness - get endianness
 * Return: 1 or 0.
 */
int get_endianness(void)
{
	int o = 1;

	if (*((char *)&o) == 1)
		return (1);

	return (0);
}
