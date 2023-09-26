#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: A pointer to the list head.
 * @index: index of the node to be deleted.
 *
 * Return: nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int num;

	for (tmp = head, num = 0; tmp && num < index; tmp = tmp->next, num++)
		;
	return (tmp);
}
