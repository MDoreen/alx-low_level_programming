#ifndef _DOG_H
#define _DOG_H

/**
 * File: dog.h
 * Desc: Header file that defines a new type struct dog
 */

/**
 * struct dog - A new type describing a dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owne;
}

/**
 * dog_t  Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
