#include "lists.h"

/**
 * list_len - printing the length of the list
 * @h: the head of the list
 *
 * Return: the size of the list
 */

size_t list_len(const list_t *h)
{
	int i;

	i = 1;
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
