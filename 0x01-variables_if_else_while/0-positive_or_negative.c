#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*more headers goes there*/
/* main - A program that prints positive ,zero or negative values of */
/* Return : (0)*/
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if else(n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
