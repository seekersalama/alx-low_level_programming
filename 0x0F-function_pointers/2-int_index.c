#include "function_pointers.h"
/**
 * int_index - check the code
 *@array: int *
 *@size: size_t
 *@cmp: void *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i += 1)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
