#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that free dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dof
 */

typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
