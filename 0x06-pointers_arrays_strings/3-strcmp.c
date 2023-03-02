#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: string to evaluate
 * @s2: string to evaluate
 * Return: Always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
