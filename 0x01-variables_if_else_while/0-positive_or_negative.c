#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point is lefted void
 * Description: it is a programm generates a random value
 * of n using the function time which gnerates a seconds
 * the n variable goes into if statement which determie
 * if the value positive, negative or zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* here goes the if else statement */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is ngeative\n", n);
	else
		printf("%d is zero\n");

	}

	return (0);
}
