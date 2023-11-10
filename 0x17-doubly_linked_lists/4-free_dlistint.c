#include "lists.h"

/**
 * free_dlistint - frees a `dlistint_t` doubly linked list
 * @head: head of LL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *memo;

	temp = head;
	if (temp == NULL)
		return;
	while (temp)
	{
		memo = temp;
		temp = temp->next;
		free(memo);
	}
}
