#include "main.h"

/**
 * swap_int - function swaps value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
