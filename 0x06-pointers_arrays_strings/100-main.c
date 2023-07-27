#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "H";
    char *p;

    p = rot13(s);
    printf("%s", p);
    
    
    
    return (0);
}