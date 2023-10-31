#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concat all argus
 * @ac: count
 * @av: arguments
 * Return: prt char
 */
char *argstostr(int ac, char **av)
{
	char *t;
	int y = 0, i = 0, z = 0, i2 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		z = 0;
		while (av[i][z] != '\0')
		{
			y++;
			z++;
		}
		i++;
	}
	y = y + ac + 1;
	t = malloc(sizeof(char) * y);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (z = 0; av[i][z] != '\0'; z++)
		{
			t[i2] = av[i][z];
			i2++;
		}
		t[i2] = '\n';
		i2++;
	}
	return (t);
}
