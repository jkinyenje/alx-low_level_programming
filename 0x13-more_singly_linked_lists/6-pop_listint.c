#include "lists.h"

/**
 * pop_listint - To delete the head 
 * @head: Pointer to the 1st element
 *
 * Return: The data inside the deleted elements
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
	return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
