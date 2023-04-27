#include <stdlib.h>
#include "lists.h"

/**
 * list_len - No of elements in a linked list
 * @h: Pointer to list_t
 *
 * Return: No of elements in h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
	{
	n++;
	h = h->next;
	}
	return (n);
}
