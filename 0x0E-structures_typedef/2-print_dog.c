#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog and handles NULL elements gracefully.
 * @d: A pointer to a struct dog to be printed.
 *
 * Description: This function prints the elements of a struct dog pointed to by @d.
 * It checks if each element (name, age, and owner) is NULL, and if so, it prints "(nil)"
 * for that element. If @d itself is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

printf("Age: %.2f\n", d->age);

printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
