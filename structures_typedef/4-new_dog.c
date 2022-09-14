#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer with a copy of the string
 * @str: string to copy
 * Return: char
 */
char *_strdup(char *str)
{
char *ar;
unsigned int i = 0;
unsigned int j = 0;

if (str == NULL)
return ('\0');
while (str[i])
{
i++;
}
ar = malloc(sizeof(char) * (i + 1));
if (ar == NULL)
return ('\0');
while (str[j])
{
ar[j] = str[j];
j++;
}
ar[j] = 0;
return (ar);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner's dog name
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
char *ncpy;
char *ocpy;

new = malloc(sizeof(dog_t));
if (new == NULL)
return ('\0');

ncpy = _strdup(name);
if (!ncpy && name)
{
free(new);
return ('\0');
}
ocpy = _strdup(owner);
if (!ocpy && owner)
{
free(ncpy);
free(new);
return ('\0');
}

new->name = ncpy;
new->age = age;
new->owner = ocpy;

return (new);

}
