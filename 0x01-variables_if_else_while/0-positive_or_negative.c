#include<stdlib.h>
#include<time.h>
/**
 * main - This program prints positive numbers, negative numbers and zero
 *
 * Return: Always 0 (Success)
*/
#include<stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (~~~else(n == 0))
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
