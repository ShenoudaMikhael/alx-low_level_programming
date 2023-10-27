#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the all args
 * @argc: int argument count
 * @argv: pointer arguments array
 * Return: 0 success
 */
int main(int argc, char const *argv[])
{
int total;
total = 0;
if (argc != 3)
{
printf("Error\n");
}
else
{
total = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", total);
}

return (0);
}
