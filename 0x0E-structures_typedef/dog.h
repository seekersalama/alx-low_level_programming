#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
* struct dog - struc about DOG
* @name: char * member
* @age: float member
* @owner: char * member
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
