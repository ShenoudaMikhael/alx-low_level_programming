#ifndef VF_H
#define VF_H
#include <stdarg.h>
/**
 * struct types - struct
 * @t: type
 * @f: function to call
*/
typedef struct types
{
	char t;
	void (*f)(va_list);
} the_types;
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char *const format, ...);

#endif
