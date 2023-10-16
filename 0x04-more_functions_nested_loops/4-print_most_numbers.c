#include "main.h"
/**
 * print_most_numbers - print all numbers except 2 & 4
 *
 * Return: 0 always (success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
