#include "main.h"

/**
 * rot13 - encode in rot13
 * @s: pointer to string
 * Return: Always 0 (success)
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ
		abcdefghijklmnopqrstuvwxyz";

		char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLM
			nopqrstuvwxyzabcdefghijklm";

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == data1[j])
				{
					s[i] = datarot[j];
					break;
				}
			}
		}
		return (s);
}
