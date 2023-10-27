#include <stdio.h>
/**
 * main - prints the number of args
 * @argc: int argument count
 * @argv: pointer arguments array
 * Return: 0 success
 */
int main(int argc, char const *argv[])
{
if (argv != NULL)
{

printf("%d\n", argc - 1);
}
else
{
printf("%d\n", 0);
}
return (0);
}
