#include <stdio.h>
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
