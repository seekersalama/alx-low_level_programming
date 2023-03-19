#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("1. %s\n", concat);
	free(concat);

	concat = string_nconcat("Best ", "School", 4);
	printf("2. %s\n", concat);
	free(concat);

	concat = string_nconcat("","Hello", 12);
	printf("3. %s\n", concat);
	free(concat);


	concat =  string_nconcat("Hello", NULL, 12);
	printf("4. %s\n", concat);
	free(concat);

	concat = string_nconcat(NULL, NULL, 10);
	printf("5. %s\n", concat);
	free(concat);


	printf("\nbefore 6\n");
	concat = string_nconcat(NULL, "Hello", 0);
	printf("6. %s\n", concat);



	return (0);
}
