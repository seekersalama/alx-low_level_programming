#include "dog.h"
/**
 * new_dog - initialize the doc struct
 *@name: char *
 *@age: float
 *@owner: char *
 * Return: dog_t *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	char *nm;
	char *wn;

	dg = NULL;
	nm = 0;
	wn = 0;
	dg = malloc(sizeof(*dg));
	nm = malloc(sizeof(*name));
	wn = malloc(sizeof(*owner));
	if (dg != NULL)
	{
		if (nm != NULL)
		{
			nm = name;
			dg->name = nm;
		}
		if (wn != NULL)
		{
			wn = owner;
			dg->owner = wn;
		}
		dg->age = age;

	} else
		return (NULL);
	return (dg);
}
