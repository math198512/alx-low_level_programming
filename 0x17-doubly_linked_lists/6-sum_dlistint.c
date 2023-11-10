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
	temp = head;
	for (sum = 0; temp; temp = temp->next)
		sum += temp->n;
	return (sum);
}
