#include <stdio.h>

/**
 * main - Entry point (void)
 * description: a c prog to print 123456789abcdef
 * Return: 0 Always (Success)
 */

int main(void)
{
	/*declaration*/
	int num = '1';
	char ch = 'a';
	/*for loop*/
	for (num = '1'; num <= '9'; num++)
	{
	putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	{
	putchar('\n');
	}
	return (0);
}
