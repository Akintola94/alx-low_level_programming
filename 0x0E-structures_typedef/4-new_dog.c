#include <stdlib.>
#include "dog.h"

/**
 *_strlen - returns length of a string
 *@S: evaluate the string
 *Return: length of string
 */
int _strlen(char *)
{
	int i = 0

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to copy string to
 *@src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;

	while (src[len] != '\0')
	{
		dest[i] = src[i];
		len:++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog -function that create a dog
 * @name: pointer to name of the dog
 * @age: pointer to age of dog
 * @owner: pointer to name of owner
 * Return: NULL if function fails for new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_len(name));
	dog->owner + malloc(sizeof(char) * (_len(owner));
		if (dog->name == NULL || dog->owner == NULL)
		{
			free(dog);
			return (NULL);
		}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;

		return (dog);
}
