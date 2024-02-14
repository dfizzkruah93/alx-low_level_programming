#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of the string
 *
 * @s: string length to be determine
 * Return: pointer to the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}
/**
 * _strcpy - copy string
 *
 * @src: source string
 * @dest: destination of string
 * Return: pointer to the copy string
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *ndog;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->name = malloc(sizeof(char) * (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
