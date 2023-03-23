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
		for (i = 1; i < (int) n; i++)
		{
			temps = va_arg(ap, char *);
			if(temps == NULL)
				printf("(nil)");
			printf("%s", temps);
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%s", va_arg(ap, char *));
		va_end(ap);
	}
	printf("\n");
}
