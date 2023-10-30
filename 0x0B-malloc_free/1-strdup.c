#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, i2;
	char *t = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	t = malloc((sizeof(char) * i) + 1);
	if (t != NULL)
	{
		for (i2 = 0; i2 < i; i2++)
		{
			t[i2] = str[i2];
		}
		return (t);
	}
	return (NULL);
}
