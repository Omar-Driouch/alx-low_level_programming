#include<stdio.h>

/*
 *
 *  main - prints the size of various types
 *  Program: Size of Various Types
 *  Description: This program prints the size of various types on the computer it is compiled and run on.
 *  return 0 if exited properly           
*/

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
