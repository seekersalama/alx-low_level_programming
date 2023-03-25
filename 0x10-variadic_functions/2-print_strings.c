#include "variadic_functions.h"
/**
 * print_strings - check the code
 *@separator: const char *
 *@n: const unsigned int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;
	char *temps;

	temps = NULL;
	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < (int) n; i++)
		{
			temps = va_arg(ap, char *);
			if (temps == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", temps);
			if (separator != NULL && i < (int) n)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
