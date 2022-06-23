#ifndef DOG_H
#define DOG_H

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

#endif
