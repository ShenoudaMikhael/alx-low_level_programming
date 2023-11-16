#include "lists.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - function
 * @list: check input
 * @r: check input
 * Return: value
 */
void print_numbers(int n)
{
	int i = 1;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	while (num / i > 9)
		i *= 10;
	while (i > 0)
	{
		_putchar((num / i) % 10 + '0');
		i /= 10;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

size_t print_list(const list_t *h)
{
	unsigned int i, len;
	const list_t *q = h;
	char *nil = "(nil)";

	len = 0;
	while (q != NULL)
	{
		len++;
		_putchar('[');
		print_numbers(q->len);
		_putchar(']');
		_putchar(' ');
		if (q->str == NULL)
		{

			for (i = 0; i < 6; i++)
			{
				_putchar(nil[i]);
			}
		}
		else
		{
			for (i = 0; i < q->len; i++)
			{
				_putchar(q->str[i]);
			}
		}

		putchar('\n');
		q = q->next;
	}

	return (len);
}