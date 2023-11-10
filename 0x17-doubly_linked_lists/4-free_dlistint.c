#include "lists.h"

/**
 * free_dlistint - frees a `dlistint_t` doubly linked list
 * @head: head of LL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	temp = head;
	if (temp == NULL)
		return;
	else
	{
		while(temp->next)
		{
			temp = temp->next;
			free(temp);
		}
		
	}
}
