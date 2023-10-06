#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;
    num1 = 0;
    num2 = 0;
    while (num1 <= 98)
    {
        
        
            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');
            putchar(' ');
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');
            putchar(',');
            putchar(' ');
            num2++;
        

        num1++;
    }

    return 0;
}
