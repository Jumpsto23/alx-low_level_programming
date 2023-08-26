#include "list.h"

/**
 * add_node_end - add new node to list
 * @head: Double poinyter
 * @str: String to manipulates
 *
 * Return: On success (pointer to head node)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = *head;
	list_t *new;

	nmew = malloc(sizeof(list_t));

	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = new->str ? _strlen(new->str) : 0;
		new->next = NULL;
	}
	if (h == NULL)
	{
		if (new == NULL)
			return (NULL);
		*head = new;
	}
	else
	{
		for ( ; h != NULL; h = h->next)
		{
			if (h->next == NULL)
			{
				if (new == NULL)
					return (NULL);
				h->next = new;
				break;
			}
		}
	}
	return (new);
}
/**
 * _strlen - string length
 * @s: string
 *
 * Return: On success (int)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
