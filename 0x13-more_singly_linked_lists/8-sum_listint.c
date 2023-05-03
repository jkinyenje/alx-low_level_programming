#include "lists.h"

/**
 * sum_listint - Sum of all the data
 * @head: 1st node in the list
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
        sum += temp->n;
        temp = temp->next;
}
return (sum);
