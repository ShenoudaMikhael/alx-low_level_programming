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
	int i, z, y, y2;
	char *t = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = 0;
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
	y2 = 0;

	for (i = 0; i < ac; i++)
	{

		for (z = 0; av[i][z] != '\0'; z++)
		{
			t[y2] = av[i][z];
			y2++;
		}
		t[y2] = '\n';
		y2++;
	}
	return (t);
}
