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
int i, total;
total = 0;
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}

total += atoi(argv[i]);
}

printf("%d\n", total);

return (0);
}
