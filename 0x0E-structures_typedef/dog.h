#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog object
 * @name: string ptr
 * @age: float
 * @owner: string ptr
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
