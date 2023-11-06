#include "dog.h"

/**
 * init_dog - Initializes a dog
 * @d: the dog to init
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
