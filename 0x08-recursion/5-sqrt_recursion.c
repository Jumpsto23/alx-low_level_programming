#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - prints square root of a number
 * @n: input variable
 * Return: On success square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - returns actual square root of number
 * @n: input variable
 * @i: iterator variable
 * Return: square root of n
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
