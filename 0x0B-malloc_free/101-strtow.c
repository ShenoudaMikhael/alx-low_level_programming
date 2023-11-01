#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return
 */
char **strtow(char *str)
{
	int i, c, i2;
	char **t;
	
	if (str == NULL)
	{
		return (NULL);
	}
	c = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			c++;
		}
	}
	t = malloc(sizeof(char) * c);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			*t[i2] = str[i];
			i2++;
		}
	}
	return (t);
}
