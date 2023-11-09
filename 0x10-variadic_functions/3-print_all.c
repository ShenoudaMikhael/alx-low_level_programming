#include "variadic_functions.h"
#include <stdio.h>
void p_int(va_list a)
{
	printf("%d", va_arg(a, int));
}
void p_float(va_list a) { printf("%f", va_arg(a, double)); }
void p_char(va_list a) { printf("%c", va_arg(a, int)); }
void p_str(va_list a)
{
	char *str = va_arg(a, char *);
	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_strings - print all args
 * @n: count or args
 * @separator: char sperator
 * Return: int
 */
void print_all(const char *const format, ...)
{

	the_types fmt[] =
		{
			{'c', p_char},

			{'i', p_int},
			{'f', p_float},
			{'s', p_str},
		};
	unsigned int i, n;

	char *sc = ", ", *s = "";

	va_list args;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		n = 0;
		while (fmt[n].t != '\0')
		{

			if (fmt[n].t == format[i])
			{
				printf("%s", s);
				fmt[n].f(args);
				s = sc;
			}

			n++;
		}

		i++;
	}
	va_end(args);

	printf("\n");
}
