#include <stdlib.h>
/**
 * string_nconcat - check the code
 *@s1: char *
 *@s2: char *
 *@n: unsigned int
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int len, i, j;

	len = 0;
	for (i = 0; s1[i] != '\0'; i += 1)
		len++;
	pt = malloc(sizeof(*pt) * (len + n));
	if (pt == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0' ; i += 1)
		*(pt + i) = s1[i];
	if (s2 == NULL)
		*(pt + i) = '\0';
	else
	{
		for (j = 0; s2[j] != '\0'; j += 1)
		{
			*(pt + len + j) = s2[j];
			if (j == n)
				break;
		}
		*(pt + len + j) = '\0';
	}
	return (pt);
}
