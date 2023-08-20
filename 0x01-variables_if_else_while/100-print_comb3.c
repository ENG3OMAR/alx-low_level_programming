#include <stdio.h>

/**
 * main - Entry point
 * description this is a c program to write
 * ones and tens in a specific way
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones;
	int tens;

	for (tens = 48; tens <= 57 ; tens++)
	{
		for (ones = tens + 1 ; ones <= 57 ; ones++)
		{
			putchar (tens);
			putchar (ones);

			if (tens == 56 && ones == 57)
			{
				putchar ('\n');
				break;
			}
			putchar (',');
			putchar (' ');
		}
	}
	return (0);
}
