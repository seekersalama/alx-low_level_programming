#include "dog.h"
/**
 * free_dog - free dog struct tyoe pointer
 *@d: dog_t *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
