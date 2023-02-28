#include "main.h"

/**
 * print_rev - prints sting in reverse
 * @s: string to be printed
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	for (o = longi; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
