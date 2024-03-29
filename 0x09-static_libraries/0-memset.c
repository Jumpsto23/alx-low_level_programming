#include "main.h"

/**
 * _memset - fill a block of memory with value
 * @s: address of memory
 * @b: valuve
 * @n: number of bytes
 *
 * Return: On success string  with new value for bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
