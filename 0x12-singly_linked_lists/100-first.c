#include <stdio.h>

/** 
 * print_message - fuction that print a message displayed
 * applying the constructor atttribute and executing before main
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * print_message - implementation of the function
 */
void myStartupFun(void)
{
        printf("You're beat! and yet, you must allow,\n");
        printf("I bore my house upon my back!\n");
}
