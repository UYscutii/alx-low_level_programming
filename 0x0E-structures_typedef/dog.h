#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct dog
 * @name : dog's name
 * @owner: owner's name
 * @age : dog's age
 * description : a struct of dogs
 */

struct dog
{
	char *name;

	char *owner;

	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
