#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates an array
 * @str: content of the array
 * Return: No return
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{}
	i++;
	array = malloc(i * sizeof(char));
	if (array == NULL)
		return (NULL);
	j = i;
	for (i = 0; i < j; i++)
	{
		*(array + i) = *(str + i);
	}
	return (array);
}
/**
 * new_dog - iniciates the new dog
 * @name: dog name
 * @age: age dog
 * @owner: dog owner
 * Return: New dog memory location
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name;
	char *dog_owner;

	dog_name = _strdup(name);
	dog_owner = _strdup(owner);
	if (dog_name == NULL || dog_owner == NULL)
	{
		free(dog_name);
		free(dog_owner);
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog_name);
		free(dog_owner);
		return (NULL);
	}
	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;
	return (dog);
}
