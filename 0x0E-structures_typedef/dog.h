#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - defines a dog
 * @name: string, name of the doggy
 * @age: float, how old in people years
 * @owner: string, name of the owner
 *
 * Description: this structure holds dogs, much like a kennel
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
