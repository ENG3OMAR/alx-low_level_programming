#include <stdio.h>

/**
 * main - Entry point 
 * Return: Always 0 (Success)
 */
	int main(void)
	{
		char xch;
		int  xint;
		long int xlong;
		long long int x2long;
		float xfl;
		printf("Size of a char: %d byte(s)\n", sizeof(xch));
		printf("Size of an int: %d byte(s)\n", sizeof(xint));
		printf("Size of a long int: %d byte(s)\n", sizeof(xlong));
		printf("Size of a long long int: %d byte(s)\n", sizeof(x2long));
		printf("Size of a float: %d byte(s)\n", sizeof(xfl));
		return (0);


	}
