#include "lists.h"

/**
 * add_node - add new node to list
 * @head: Double pointer
 * @str: string to manipulate
 *
 * Return: On success (pointer to new list)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *old = *head;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = new->str ? _strlen(new->str) : 0;
	new->next = old;

	*head = new;

	return (*head);
}
/**
 * _strlen - length of string
 * @s: Pointer to array
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
