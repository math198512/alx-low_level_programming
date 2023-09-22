#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = temp;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}

