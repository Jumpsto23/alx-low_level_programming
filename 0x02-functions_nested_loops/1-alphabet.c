#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase from a to z
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
