#include "main.h"

/**
 * _islower - Checks if char is lowercase alphabet character
 *@c: is char to be checked
 * Return: 1 if char is lowercase and return 0 otherwise
 */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		return (1);
		else
		return (0);
}
