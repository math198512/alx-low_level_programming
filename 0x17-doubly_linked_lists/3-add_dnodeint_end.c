#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a `dlistint_t` list
 * @head: double pointer to head node
 * @n: value to store in node
 * Return: address of new node, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (temp == NULL)
		new->next = NULL;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
	}
	*head = new;

	return (*head);

}
