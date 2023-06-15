#include "main.h"

/**
 * _strlen_recursion - prints lenght of a string
 * @s: Input variable
 * Return: On success a string
 */

int _strlen_recursion(char *s)
{
	int longitude = 0;

	if (*s)
	{
		longitude++;
		longitude = longitude + _strlen_recursion(s + 1);
	}
	return (longitude);
}
