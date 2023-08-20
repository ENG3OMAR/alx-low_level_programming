#include <stdio.h>

/**
 * main - Entry point
 * Description: print all number with put char
 * Return: 0 Always (Success)
 */

int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

		return (0);
}
