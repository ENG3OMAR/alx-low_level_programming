#include <stdio.h>
/**
 * main - Entry Point
 * Description: this is a c program to
 * print the alphabet in reversed way
 * Return: 0 Always (Success)
 */
int main(void)
{
	char rev = 'z';

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');

	return (0);
}
