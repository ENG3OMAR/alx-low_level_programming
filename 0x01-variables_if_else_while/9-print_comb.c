#include <stdio.h>
/**
 * main - Entry Point (void)
 * this is a c program to write the numbers from
 * 1-9 in some specifiec way
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n = '0';
	int z = '9';

	for (n = '0'; n <= '8'; n++)
	{
		putchar(n);
		putchar(44);
		putchar(32);
	}
	putchar(z);
	return (0);
}
