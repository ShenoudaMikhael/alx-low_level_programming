#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	int i, i2, i3, i4;
	char *t;
	t = NULL;
	i = 0;
	i2 = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[i2] != '\0')
	{
		i2++;
	}
	t = malloc(sizeof(char) * (i+i2) + 1);
	if (t != NULL)
	{
		i3 = 0;

		while (i3 < i)
		{
			t[i3] = s1[i3];
			i3++;
		}
		i4 = 0;
		while (i3 < i + i2)
		{
			t[i3] = s2[i4];
			i3++;
			i4++;
		}
		return (t);
	}
	return (NULL);
}
