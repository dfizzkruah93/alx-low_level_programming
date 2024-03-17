#include <stdio.h>

/**
 * print_message - fuction that print a message displayed
 * applying the constructor atttribute and executing before main
 */
void print_message(void) __attribute__ ((constructor));

/**
 * print_message - implementation of the function
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
