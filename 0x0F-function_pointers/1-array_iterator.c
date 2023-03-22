#include "function_pointers.h"
/**
 * array_iterator - check the code
 *@array: int *
 *@size: size_t
 *@action: void *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i += 1)
		action(array[i]);
}
