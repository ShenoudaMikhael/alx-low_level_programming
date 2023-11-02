#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: numcber to concat
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i;
	char *t;

	s1_len = 0, s2_len = 0, i = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	if (s2_len - 1 > n)
		s2_len = n;

	t = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		t[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++)
	{

		t[i + s1_len] = s2[i];
	}
	t[s1_len + s2_len + 1] = '\0';

	return (t);
}
