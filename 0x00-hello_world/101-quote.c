#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: this is a c programming which we can't use printf or puts and thier
 * alternative functions so i'm gonna use write() function
 * from a header file called unistd
 * Return: Always 1 (Success)
 */

	int main(void)
	{	
		write(1,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",58);
		return (1)
	}	
