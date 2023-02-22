#include "main.h"

/**
 * _isalpha - function checks for alphabetic character
 *
 * @c: is the char to be checked
 * Returns: 1 if char is a lowercase or uppercase and
 * returns 0 otherwise
 */

int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
}
