#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
     
    char c[]= { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r','\n' };

    i = 0;
    
    
     while (i < 9)
    {
        /* code */
        _putchar(c[i]);

        i++;
    }

    return (0);
}
