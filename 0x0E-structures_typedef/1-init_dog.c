/**
 * init_dog - function initializes variables of struct dog
 *@d: pointer to struct dog
 *@name: pointer to dog name
 *@age: pointer to dog age
 *@owner: pointer to dog owner
 */
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
