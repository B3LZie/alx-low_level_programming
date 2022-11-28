#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at the end
 * @head: the head of the list
 * @str: the string to add
 *
 * Return: the pointer to the head 
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t, *hp = *head;
	unsigned int i;
	
	i = 1;
	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	t->next = NULL;
	t->str = strdup(str);
	if (t->str)
		while (t->str[i])
			i++;
	t->len = i;
	if (hp)
	{
		while (hp->next)
			hp = hp->next;
		hp->next = t;
	}
	else
		*head = t;
	return (t);
}
