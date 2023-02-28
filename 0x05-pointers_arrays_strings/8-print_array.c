#include "main.h"

/**
 * print_array - prints elements an array
 * @a: array name
 * @n: number of elements of array
 * Return: a and n input
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[1]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
