#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @str: string to capitalize
 * Return: pointer to the changed string.
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'Z'))
			x++;
		if (str[x - 1] == ' ' || str[x - 1] == '\t' || str[x - 1] == '\n' ||
				str[x - 1] == ',' || str[x - 1] == ';' || str[x - 1] == '.'
				|| str[x - 1] == '!' || str[x - 1] == '?' || str[x - 1] ==
				'"' || str[x - 1] == '(' || str[x - 1] == ')' || str[x - 1]
				== '{' || str[x - 1] == '}' || x == 0)
			str[x] -= 32;
		x++;
	}
	return (str);
}
