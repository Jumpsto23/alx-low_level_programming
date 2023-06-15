#include "main.h"

/**
 * _puts_recursion - function like puts() that prints a string
 * @s: input variable
 * Return: 0 ON (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
