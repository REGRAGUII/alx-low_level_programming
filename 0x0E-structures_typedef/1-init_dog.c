#include "dog.h"
#include <stdio.h>
 /**
 * init_dog - entry
 * @d: size of
 * @name: name of
 * @age: age of
 * @owner: name of the owner
 * Description: --
 * Return: --
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
