#include "main.h"
/**
 * _puts - prints a string,
 * followed by a new line, to stdout.
 * @s: the srting to print
 */
void _puts(char *s)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return;
}
