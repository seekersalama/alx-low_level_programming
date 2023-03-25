#include "variadic_functions.h"
/**
 * print_all - check the code
 *@format: const char * const
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int j;
	va_list ap;

	j = 0;
	va_start(ap, format);
	if(format != NULL)
	{
		while (format[j] != '\0')
		{
			if (j != 0)
				printf(", ");
			switch (format[j])
			{
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 's':
					printf("%s", va_arg(ap, char *));
					break;
				case 'c':
					printf("%c", (char)va_arg(ap, int));
					break;
				case 'f':
					printf("%f", (float)va_arg(ap, double));
					break;
				default:
					break;
			}
			j++;
		}
	}
	printf("\n");
	va_end(ap);
}
