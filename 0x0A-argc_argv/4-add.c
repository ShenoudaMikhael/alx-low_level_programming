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
int i, z, total;
total = 0;
for (i = 1; i < argc; i++)
{
z = 0;
while (argv[i][z] != '\0')
{
if (argv[i][z] < '0' || argv[i][z] > '9')
{

printf("Error\n");
return (1);
}
z++;
}

total += atoi(argv[i]);
}

printf("%d\n", total);

return (0);
}
