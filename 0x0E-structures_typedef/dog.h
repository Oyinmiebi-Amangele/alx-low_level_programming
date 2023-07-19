#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - stores the information about dogs.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Description: the struct called 'dog', stores its name
 * the age and the owner ofthe dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
