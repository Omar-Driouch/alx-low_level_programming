#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main: is the entery point of this program that prints random number each time get executed followed by its sign
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<0)
		printf("%d is negative\n",n);
	if(n>0)
		printf("%d is positive\n",n);
	if(n==0)
		printf("%d is zero\n",n);
	return (0);
}
