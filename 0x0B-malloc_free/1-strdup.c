#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory
 * @str: input value
 * Return: On success 0
 */

char *_strdup(char *str)
{
	char *ccc;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	ccc = malloc(sizeof(char) * (i + 1));

	if (ccc == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ccc[r] = str[r];

	return (ccc);
}
