#include <stdlib.h>
#include "dog.h"
#include <stdlib.h>

char *mystrdup(char *str);

/**
 * new_dog - a fn that creates a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 * Return: the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	n = malloc(sizeof(dog_t));
	if (n == NULL)
		return (NULL);
	n->name = mystrdup(name);

	if (n->name == 0)
		free(n);
	n->age = age;
	n->owner = mystrdup(owner);

	if (n->owner == 0)
	{
		if (n->name != 0)
			free(n->name);
		free(n);
	}
	return (n);
}

/**
 * mystrdup - allocates memory
 * @s: the string
 * Return: the memory
 */

char *mystrdup(char *s)
{
	char *p;
	int i, j;

	j = 0;
	if (!s)
		return (0);
	while (s[j] != '\0')
		j++;
	p = malloc((j + 1) * sizeof(char));
	if (p == NULL)
		return (p);
	for (i = 0; i < j; i++)
		p[i] = s[i];
	p[i] = '\0';
	return (p);
}
