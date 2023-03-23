#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 *@n: const unsigned int
 * Return: int sum of input values
 */


int sum_them_all(const unsigned int n, ...)
{
	int i;
	int total;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	total = 0;
	for (i = 0; i < (int) n; i++)
		total += va_arg(ap, int);
	va_end(ap);
	return (total);

}
