#include "dog.h"
#include <stdlib.h>
/**
 * *_strcpy - copystring
 * @dest: to copy to
 * @src: source vlaue
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);

		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - get sreing length
 * @s: the string
 * Return: int
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * new_dog - return new dog struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: struct or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_t;
	char *c_name, *c_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t = malloc(sizeof(struct dog));
	c_name = malloc(sizeof(char) * _strlen(name) + 1);
	c_owner = malloc(sizeof(char) * _strlen(owner) + 1);

	_strcpy(c_name, name);
	_strcpy(c_owner, owner);
	dog_t->name = c_name;
	if (dog_t->name == NULL)
	{
		free(dog_t);
		return (NULL);
	}
	dog_t->age = age;
	dog_t->owner = c_owner;
	if (dog_t->owner == NULL)
	{
		free(dog_t);
		return (NULL);
	}
	if (dog_t == NULL)
	{
		free(dog_t);
		return (NULL);
	}
	return (dog_t);
}
