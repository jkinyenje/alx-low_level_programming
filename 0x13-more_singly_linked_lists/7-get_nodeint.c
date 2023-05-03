#include "lists.h"/** * get_nodeint_at_index - Return the node at an indexed list * @head: 1st node in the list * @index: Index * * Return: 0 */listint_t *get_nodeint_at_index(listint_t *head, unsigned int index){unsigned int i = 0;listint_t *temp = head;while (temp && i < index){temp = temp->next;i++;}return (temp ? temp : NULL);}#include "lists.h"

/**
 * get_nodeint_at_index - Return the node at an indexed list
 * @head: 1st node in the list
 * @index: Index
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
