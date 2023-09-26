#include "lists.h"

/**
 * sum_listint - calculates  the sum of all the data (n) of a linked list.
 * @head: A pointer to the list head.
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 * if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int num, sum;

	if (head == NULL)
		return (0);
	sum = 0;
	for (tmp = head, num = 0; tmp != NULL; tmp = tmp->next, num++)
		sum += tmp->n;
	return (sum);
}
