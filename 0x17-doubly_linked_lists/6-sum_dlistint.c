#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly ll.
 * @head: pointer to head of doubly ll
 * Return: sum of data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
