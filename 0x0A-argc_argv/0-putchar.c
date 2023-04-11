#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes char c to standard output
 * @c: character to print
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
