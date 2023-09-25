#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	for (temp = h, count = 0; temp != NULL; count++, temp = temp->next)
		printf("%d\n", temp->n);
	return (count);
}
