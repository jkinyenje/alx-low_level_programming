#include "lists.h"

/**
 * listint_len - No of elements in the linked list
 * @h: linked list to traverse
 *
 * Return: No of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
	{
	num++;
	h = h->next;
	}

	return (num);
}
