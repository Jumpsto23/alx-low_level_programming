#include "main.h"

/**
 * _isupper - prints uppercase letters
 * @c: character to be checked
 *
 * Return: 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
