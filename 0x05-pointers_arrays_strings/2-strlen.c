#include <stdio.h>

/**
 * _strlen - function returns lenght of string
 * @s: char to be updated
 * Return: lenght of a string.
 */

int main(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
