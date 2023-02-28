#include "main.h"

/**
 *
 * _puts - prints a sting followed bny a new line
 * @str: string to prints
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
