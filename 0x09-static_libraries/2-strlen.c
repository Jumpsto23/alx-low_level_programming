#include "main.h"

/**
 * _strlen - prints lenght of a string
 * @s: input string
 * Return: On success lenght of a string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
