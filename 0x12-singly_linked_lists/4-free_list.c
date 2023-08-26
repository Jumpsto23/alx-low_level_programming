#include "list.h"

/**
 * free_list - frees memory
 * @head: pointer to head node
 *
 * Return: On success (nothing)
 */

void free_list(list_t *head)
{
	list_t *i;

	if (head != NULL)
	{
		for ( ; head != NULL; head = i)
		{
			free(head->str);
			i = head->next;
			free(head);
		}
		free(i);
	}
	free(head);
}
