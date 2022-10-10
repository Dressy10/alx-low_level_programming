#include "dog.h"
/**
 * init_dog - initialized a variable of type struct dug.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: ownrt of the dog.
 * Return: no return.
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
