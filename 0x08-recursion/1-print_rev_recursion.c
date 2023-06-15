#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input variable
 * Return: On success a string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar('\n');
	}
}
