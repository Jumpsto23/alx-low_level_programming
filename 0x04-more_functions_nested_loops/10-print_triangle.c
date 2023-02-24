#include "main.h"

/**
 * print_triangle - function prints a triangle followed by new line
 * @size: size of triangle
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
	for (j = i; j < size; j++)
	{
	_putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
