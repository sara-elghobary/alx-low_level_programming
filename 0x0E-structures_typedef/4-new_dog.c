#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the given name, age, and owner.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the newly created dog_t struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

if (newDog == NULL)
return (NULL);

newDog->name = strdup(name);
newDog->owner = strdup(owner);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
}
