#include <stdio.h>

/**
 * main - Entry Point
 * this i a program to print
 * all the alphabet characters
 * without q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char all;

	for (all = 'a'; all <= 'z'; all++)
	{
		if (all != 'q' && all != 'e')
		{
		putchar(all);
		}
	}
	putchar('\n');
	return (0);
}
