#include <stdio.h>
#include <stdlib.h>
/**
 * check - takes total and cahnge
 * @total: total value
 * @change: change needed
 * Return: int
 */
int check(int total, int change)
{
while (total > 0)
{
if (total - 25 >= 0)
{
total -= 25;
change++;
continue;
}
if (total - 10 >= 0)
{
total -= 10;
change++;
continue;
}
if (total - 5 >= 0)
{
total -= 5;
change++;
continue;
}
if (total - 2 >= 0)
{
total -= 2;
change++;
continue;
}
if (total - 1 >= 0)
{
total -= 1;
change++;
continue;
}
}
return (change);
}

/**
* main - prints the all args
* @argc: int argument count
* @argv: pointer arguments array
* Return: 0 success
*/
int main(int argc, char const *argv[])
{
int total, change;
total = 0;
change = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);
if (total < 0)
{
printf("0\n");
return (0);
}
change = check(total, change);
printf("%d\n", change);
return (0);
}
