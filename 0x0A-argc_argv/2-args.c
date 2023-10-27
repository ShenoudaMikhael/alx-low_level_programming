#include <stdio.h>
/**
 * main - prints the all args
 * @argc: int argument count
 * @argv: pointer arguments array
 * Return: 0 success
 */
int main(int argc, char const *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
