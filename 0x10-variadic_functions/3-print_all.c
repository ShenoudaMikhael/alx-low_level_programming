#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all args
 * @format: count or args
 * Return: int
 */
void print_all(const char *const format, ...)
{

	unsigned int i, n;

	char *str, *sc = ", ", *s = "";

	va_list args;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0' && format != NULL)
		i++;
	{
	}
	n = 0;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			s = sc;
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), s);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), s);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), s);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, s);
			break;
		}
		n++;
	}
	printf("\n");

	va_end(args);
}
