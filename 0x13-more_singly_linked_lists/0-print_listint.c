#include "lists.h"

/**
 * print_listint - Print a linked list
 * @h: Type listint_t to print
 *
 * Return:No of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}

	return (num);
}
