#include "lists.h"
/**
 * _strlen - prints the length of a string.
 *
 * @s: input string.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
