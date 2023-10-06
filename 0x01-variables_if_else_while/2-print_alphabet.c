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
char letters[26] = {
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
, 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z'
};
int i;
i = 0;

while (i < 26)
{
/* code */
putchar(letters[i]);
i++;
}
putchar('\n');
return (0);
}
