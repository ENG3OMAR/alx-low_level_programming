#include <stdio.h>

/**
 * main - entry point
 * this is a c programm to print
 * the alphabet from a to z
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);

		alpha++;
	}
	putchar(\n);

	return (0);
}
