#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - define a new type struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: owner's dog name
 */

struct dog
{
char *name;
float age;
char *owner;
};
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
