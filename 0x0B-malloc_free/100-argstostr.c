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
	for (i = 0; i < ac; i++)
	{
		z = 0;
		while (av[i][z] != '\0')
		{
			y++;
			z++;
		}
		y++;
	}
	t = malloc((sizeof(char) * y));
	if (t == NULL)
	{
		return (NULL);
	}
	y2 = 0;
	i = 0;
	while (i < ac)
	{
		z = 0;
		while (av[i][z] != '\0')
		{
			t[y2] = av[i][z];
			y2++;
			z++;
		}
		t[y2] = '\n';
		i++;
		y2++;
	}
	return (t);
}
