#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that free dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dof
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
