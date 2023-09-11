#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog variable.
 * @d: A pointer to a struct dog variable to be initialized.
 * @name: A pointer to a string representing the name of the dog.
 * @age: The age of the dog.
 * @owner: A pointer to a string representing the owner of the dog.
 *
 * Description: This function initializes the members of a struct dog variable
 * pointed to by @d with the provided values for @name, @age, and @owner. It
 * checks if the provided pointer @d is not NULL before performing the
 * initialization.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d.name = name;
d.age = age;
d.owner = owner;
}
}
