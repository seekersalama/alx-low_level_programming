#include "variadic_functions.h"
/**
 * print_numbers - check the code
 *@separator: const char *
 *@n: const unsigned int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 1; i < (int) n; i++)
		{
			printf("%d", va_arg(ap, int));
				if (separator != NULL)
					printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
		va_end(ap);
	}
	printf("\n");
}
