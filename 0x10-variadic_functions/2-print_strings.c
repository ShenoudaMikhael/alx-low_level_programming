#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print all args
 * @n: count or args
 * @separator: char sperator
 * Return: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *cr;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		cr = va_arg(args, char *);
		if (cr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", (cr));
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
