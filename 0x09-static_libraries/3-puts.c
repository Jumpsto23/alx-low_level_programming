#include "main.h"

/**
 * _puts - prints astring followed by a new line
 * @str: string to be printed
 * Return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
