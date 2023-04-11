#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the character to be checked
 * Return: On success 1
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
