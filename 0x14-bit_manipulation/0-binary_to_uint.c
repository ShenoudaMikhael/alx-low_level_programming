#include <stdio.h>
/**
 * sum_exp - sum of expeonetioals of 2
 * @b: char 1 or 0
 * @i: lenth
 * Return: int
 */
int sum_exp(const char *b, int i)
{
	int sum = 1;
	int temp_i = i - 1;

	if (*b != '\0')
	{
		if ((char)*b == '1')
		{
			while (temp_i > 0)
			{

				sum *= 2;
				temp_i--;
			}
			return (sum + sum_exp(b + 1, i - 1));
		}
		else
		{

			return (sum_exp(b + 1, i - 1));
		}
	}
	return (0);
}
/**
 * binary_to_uint - convert binary to number
 * @b: ptr to binary string
 * Return: int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;

	while (b[len] != '\0')
	{
		if (!((char)b[len] == '1' || (char)b[len] == '0'))
		{
			return (0);
		}
		len++;
	}
	return (sum_exp(b, len));
}
