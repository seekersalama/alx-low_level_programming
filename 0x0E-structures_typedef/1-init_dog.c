#include "dog.h"
/**
 * init_dog - initialize the doc struct
 *@d: struct dog *
 *@name: char *
 *@age: float
 *@owner: char *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}