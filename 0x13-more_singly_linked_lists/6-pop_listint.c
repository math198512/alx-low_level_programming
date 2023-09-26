#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: A pointer to the list head.
 *
 * Return: head node’s data (n) or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);
	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (num);
}
