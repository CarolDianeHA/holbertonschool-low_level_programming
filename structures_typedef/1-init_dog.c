#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog.
 * @d: name of the structure dog
 * @name: dog name
 * @age: dog age
 * @owner: owner's dog name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
