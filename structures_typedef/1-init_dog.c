#include "dog.h"
/**
 * init_dog - dog data
 * @d: initializes dog
 * @name: name dog
 * @age: age dog
 * @owner: the owner dog
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
