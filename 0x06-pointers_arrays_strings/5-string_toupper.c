#include "main.h"

/**
 * string_toupper - changes string n all lowercase to uppercase
 * @n: value to be checked
 * Return: Always 0 (success)
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'Z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
