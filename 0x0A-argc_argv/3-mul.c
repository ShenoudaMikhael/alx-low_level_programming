#include <stdio.h>
/**
 * main - prints the all args
 * @argc: int argument count
 * @argv: pointer arguments array
 * Return: 0 success
 */
int main(int argc, char const *argv[])
{
int multi;
if (argc != 3)
{
printf("Error\n");
}
else
{
multi = 0;
multi = (int) *argv[1] * (int) *argv[2];
printf("%d\n", multi);
}

return (0);
}
