#include "function_pointers.h"
void fun(char *name)
{
    while (name != '\0')
    {
        _putchar(name++);
    }
    _putchar('\n');
}
/**
 * print_name
 */
void print_name(char *name, void (*f)(char *))
{
    f = fun;
}
