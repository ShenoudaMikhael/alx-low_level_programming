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

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t = malloc(sizeof(struct dog));
	if (dog_t == NULL)
		return (NULL);

	dog_t->name = malloc(sizeof(char) * _strlen(name) + 1);

	if (dog_t->name == NULL)
	{
		free(dog_t->name);
		free(dog_t);
		return (NULL);
	}

	dog_t->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (dog_t->owner == NULL)
	{
		free(dog_t->owner);
		free(dog_t->name);

		free(dog_t);
		return (NULL);
	}
	if (dog_t == NULL)
	{
		free(dog_t);
		return (NULL);
	}
	_strcpy(dog_t->name, name);
	dog_t->age = age;
	_strcpy(dog_t->owner, owner);

	return (dog_t);
}
