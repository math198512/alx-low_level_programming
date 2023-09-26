#include "lists.h"

/**
 * free_listint2 - Frees a list and sets the head to NULL
 * @head: A pointer to the list head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
