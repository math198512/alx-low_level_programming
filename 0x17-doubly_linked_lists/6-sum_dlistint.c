#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly ll.
 * @head: pointer to head of doubly ll
 * Return: sum of data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
