#include "main.h"

/**
 * main - fizzbuzz questio
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 != 0)
	{
	printf("Fizz");
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
	printf("Buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("Fizzbuzz");
	}
	else if (i == 1)
	{
	printf("%d", i);
	}
	else
	{
	printf("%d", i);
	}
	}
	printf("\n");
	return (0);
}