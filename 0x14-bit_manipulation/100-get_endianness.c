int get_endianness(void)
{
	int o = 1;

	if (*((char *)&o) == 1)
		return (1);
	else
		return (0);
}
