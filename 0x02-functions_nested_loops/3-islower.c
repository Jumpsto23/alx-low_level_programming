#include "main.h"

/**
 * _islower - Checks for lowercase alphabet character
 *@c: is char to be checked
 * Return 1 if c is lowercase and return 0 otherwise
 */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		return (1);
		else
		return (0);
}
