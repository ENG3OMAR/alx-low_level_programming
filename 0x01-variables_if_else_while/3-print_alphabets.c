#include <stdio.h>

/**
 * main - Entry Point void
 * Descripthion: this is a c program to
 * print the alphbet from a to z in both
 * lower case and upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);

		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);

		upper++;
	}
	putchar('\n');

	return (0);
}
