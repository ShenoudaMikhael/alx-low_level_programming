#include <stdio.h>
/**
 * main - prints the command name
 * @argc: int argument count
 * @argv: pointer arguments array
 * Return: 0 success
 */
int main(int argc, char const *argv[])
{

if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
