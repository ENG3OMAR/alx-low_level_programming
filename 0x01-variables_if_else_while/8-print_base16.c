#include <stdio.h>

/**
 * main - Entry point (void)
 * description: a c prog to print 123456789abcdef
 * Return: 0 Always (Success)
 */

int main(void)
{
	int num = '0';
	char ch = 'a';

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
