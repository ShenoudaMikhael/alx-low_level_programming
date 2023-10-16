#include "main.h"
/**
 * more_numbers - print numbers from 0 : 14
 * Return: None
 */
void more_numbers(void)
{
	int i, i2, l, r = 0;

	for (i2 = 0; i2 < 10; i2++)
	{
		/* code */

		for (i = 0; i < 15; i++)
		{
			l = i / 10;
			r = i % 10;

			if (l != 0)
			{
				_putchar(l + '0');
			}
			_putchar(r + '0');
		}
		_putchar('\n');
	}
}
