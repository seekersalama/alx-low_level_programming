#include "main.h"
/**
* print_array - check the code
*@a: int * input pointer
*@n: int input
* Return: Always 0.
*/
void print_array(int *a, int n)
{
	int length;
	for (length = 0; length < n - 1; length++)
	{
		printf("%d, ", *(a + length));
	}
	printf("%d\n", *(a + length));
}
