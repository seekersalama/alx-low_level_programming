#include <stdio.h>
#include <unistd.h>
/**
 * main -Print the str tring to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "\"and that piece of art is useful\"", 10);  
	write(1, " - Dora Korpar, 2015-10-19\n", 8);
	return (0);
}
