#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Data of my pet
 * @name: First parameter
 * @age: Second Parameter
 * @owner: Third parameter
 * Description: dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
