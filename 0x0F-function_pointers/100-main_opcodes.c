#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int agument count
 * @argv: agument
 * Return: int
 */
int main(int argc, char *argv[])
{

	int i, n;
	void *mainAddress = (void *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx ", ((char *)mainAddress)[i]);
	}
	printf("\n");
	return (0);
}
