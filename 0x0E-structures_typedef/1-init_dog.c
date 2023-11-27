#includde "dog.h"
/**
 * init_dog - initializing a dog
 * @d :the initialized dog
 * @name : dog's name
 * @owner: owner's name
 * @age : dog's age
 * Return : always void
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
