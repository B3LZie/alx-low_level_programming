#include "lists.h"
#include <string.h>

/**
 * add_node - adding node to beginning of list
 * @head: pointer to the head
 * @str: string to be put
 *
 * Return: pointer to the node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	unsigned int i;

	i = 1;
	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	t->next = *head;
	t->str = strdup(str);
	if (t->str)
	{
		while (t->str[i])
			i++;
	}
	t->len = i;
	*head = t;
	return (t);
}
