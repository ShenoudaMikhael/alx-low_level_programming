#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isalpha - Entry point
 * @c: the character to check
 *
 * Return: Always Void (Success)
 */
int _isalpha(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
