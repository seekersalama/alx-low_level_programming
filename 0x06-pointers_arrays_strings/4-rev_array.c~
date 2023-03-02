#include <stdio.h>

/**
* reverse_array - a function that reverses the content of an array of integers.
* @a: int input
* @n: int input
* Prototype: void reverse_array(int *a, int n);
* Where n is the number of elements of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, t;
	int *b;

	b = a;
	t = 0;
	for (i = n - 1; i > 0; i -= 1)
	{
		*(b + t++) = *(a + i);
	}
	a = b;
}
