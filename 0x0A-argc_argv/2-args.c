#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: ON success 1
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
