#include "list.h"

/**
 * list_len - counts length of list
 * @h: pointer to list
 *
 * Return: On success (size_t, length)
 */

size_t list_len(const list_t *h)
{
	size_t list_length = 0;

	for ( ; h != NULL; h = h->next)
		list_length++;

	return (list_length);
}
