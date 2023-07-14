#include <stdlib.h>
#include <time.h>
/*return: 0 if the program exited proberly */

/*main: the entry point of this code that prints random number followed by its positive or negative sign  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<0)
		putchar("%d  is negative",n);
	if(n>0)
		putchar("%d  is positive",n);
	if(n==0)
		putchar("%d is zero",n);
	return (0);
}
