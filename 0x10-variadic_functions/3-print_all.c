#include <stdarg.h>
#include <stdio.h>
void p_int(va_list a) { printf("%d", va_arg(a, int)); }
void p_float(va_list a) { printf("%f", va_arg(a, double)); }
void p_char(va_list a) { printf("%c", va_arg(a, int)); }
void p_str(va_list a) { printf("%s", va_arg(a, char *)); }

/**
 * print_strings - print all args
 * @n: count or args
 * @separator: char sperator
 * Return: int
 */
void print_all(const char *const format, ...)
{
	typedef struct types
	{
		char t;
		void (*f)(va_list);
	} the_types;
	the_types fmt[] =
		{
			{'i', p_int},
			{'c', p_char},
			{'f', p_float},
			{'s', p_str},
		};

	unsigned int i, n;

	va_list args;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		printf("%c\n", format[i]);
		n = 0;
		while (fmt[n].t != '\0')
		{
			fmt[n].f(args);

			n++;
			if (fmt[n].t != '\0')
			{
				printf(", ");
			}
		}

		i++;
	}
	va_end(args);

	printf("\n");
}
