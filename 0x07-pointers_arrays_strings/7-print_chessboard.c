#include "main.h"
/**
 * print_chessboard - prints buffer in hexa
 * @a: char *the address of memory to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	unsigned int sz;

	sz = sizeof(a);
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
