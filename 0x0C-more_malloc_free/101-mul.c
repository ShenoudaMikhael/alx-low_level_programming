#include "main.h"
#include <stdlib.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!s[0])
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s++;
	if (!s[0])
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s);
	}

	return;
}

/**
 * _atoi - extract numbers from string
 * @s: string to examine
 * Return: int
 */
int _atoi(char *s)
{
	int i, num, neg;
	i = 0;
	num = 0;
	neg = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == 45)
		{

			neg *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{

			num *= 10;
			num = num + ((s[i] - 48) * neg);
		}
		else if (num != 0)
		{
			_puts_recursion("Error");
			exit(98);
			break;
		}

		i++;
	}

	return (num);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int a, b,m;
	char *e = "Error";
	a = 0;
	b = 0;

	if (argc != 3)
	{
		_puts_recursion(e);
		exit(98);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[argc]);
	 m = a*b;
	return (m);
}
