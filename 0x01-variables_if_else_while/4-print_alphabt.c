#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char l;

	l = 'a';
	while
	(l <= 'z') {
		if ((l != 'q' && l != 'e') && l <= 'z')
			putchar(l);
		l++;
	}
putchar('\n');
return (0);
}
