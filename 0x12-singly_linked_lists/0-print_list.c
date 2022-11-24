#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the list node
 * @h: the head of the list
 *
 * Return: the size
 */

size_t print_list(const list_t *h)
{
	int i;
	char *s;

	i = 0;
	while (h != NULL)
	{
		s = h->str;
		if (s == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, s);
		}
		h = h->next;
		i++;
	}
	return (i);
}
