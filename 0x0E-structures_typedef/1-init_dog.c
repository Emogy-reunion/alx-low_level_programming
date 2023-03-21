#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->name = name;
	d->owner = owner;
}
