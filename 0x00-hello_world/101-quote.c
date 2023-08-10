#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: this is a c programming which we can't 
 * use printf or puts and thier
 * alternative functions so i'm gonna use write() function
 * from a header file called unistd
 * Return: Always 1 (Success)
 */

	int main(void)
	{
		write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
		return (1);
	}
