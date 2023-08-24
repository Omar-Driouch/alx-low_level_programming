#include <stdio.h>

/**
 * before_main - Function executed before main
 * Return: No return value.
 */
void __attribute__((constructor)) before_main(void)
{
    printf("You're beat! and yet, you must allow");
    printf(",\nI bore my house upon my back!\n");
}
