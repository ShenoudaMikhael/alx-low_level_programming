#include "variadic_functions.h"
#include <stdio.h>
/**
 * p_int - print int
 * @a: vaglist
 * Return: Nothing
 */
void p_int(va_list a)
{
	printf("%d", va_arg(a, int));
}
/**
 * p_char - print int
 * @a: vaglist
 * Return: Nothing
 */
void p_char(va_list a) { printf("%c", va_arg(a, int)); }
/**
 * p_float - print int
 * @a: vaglist
 * Return: Nothing
 */
void p_float(va_list a) { printf("%f", va_arg(a, double)); }

/**
 * p_str - print int
 * @a: vaglist
 * Return: Nothing
 */
void p_str(va_list a)
{
	char *str = va_arg(a, char *);

	if (str)
	{
		printf("%s", str);

		return;
	}
	printf("(nil)");
}

/**
 * print_all - print all args
 * @format: count or args
 * Return: int
 */
void print_all(const char *const format, ...)
{

	the_types fmt[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_str},
		{'\0', NULL}};
	unsigned int i, n;

	char *sc = ", ", *s = "";

	va_list args;

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
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
	printf("\n");

	va_end(args);
}
