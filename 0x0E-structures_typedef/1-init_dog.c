#include "dog.h"
/**
 * init_dog - initializes dog variable
 * @d: pointer to struct type dog
 * @name: pointer to char dog's name
 * @age: dog's age
 * @owner: pointer to char dog's owner
 * Return: 0
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
