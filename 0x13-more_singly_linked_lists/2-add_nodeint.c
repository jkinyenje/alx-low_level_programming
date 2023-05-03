#include "lists.h"

/**
 * add_nodeint - To add a new node 
 * @head: Pointer to the 1st node
 * @n: Data 
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
