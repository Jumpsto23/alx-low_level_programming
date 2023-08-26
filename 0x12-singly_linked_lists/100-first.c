#include <stdio.h>

void execute_before_main(void)_attribute_((constructor));

/**
 * execute_before_main - Function is called before main
 *
 * Description: Function prints a string
 *
 * Return: ON success nothing
 */

void execute_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
