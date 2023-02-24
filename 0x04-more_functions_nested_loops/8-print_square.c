#include "main.h"

/**
 * print_square - function prints a square followed by a new line
 * @size: the size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
