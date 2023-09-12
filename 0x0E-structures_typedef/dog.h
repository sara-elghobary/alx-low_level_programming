#ifndef MYHEADERS_H
#define MYHEADERS_H

/**
 * struct dog - description for a pet
 * @name: pet name
 * @age: pet age
 * @owner: owner
 *
 * Description: Longer description
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
