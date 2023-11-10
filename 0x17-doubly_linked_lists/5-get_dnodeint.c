#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a doubly ll.
 * @head: pointer to head of doubly ll
 * @index: node index to return
 * Return: node at index given or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	while (head)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
