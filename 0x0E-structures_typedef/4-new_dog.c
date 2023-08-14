#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
dog_t new_dog;
new = &new_dog;
if (new == NULL)
	{
		free(new);
		return (NULL);
	}
new->age = age;
new->name = name;
if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
new->owner = owner;
if (new->owner == NULL)
	{
		free(new->owner);
		free(new);
		return (NULL);
	}
return (new);
}
