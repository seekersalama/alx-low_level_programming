#include <stdlib.h>
#include <stdio.h>
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
	unsigned int len1, len2, i;
	len1 = 1;
	len2 = 1;
	for (i = 0; s1[i] != '\0'; i += 1)
		len1++;
	if (s2 == NULL)
	{
		s2 = malloc(1);
		s2 = "";
		n = 0;
		printf("\n1: Reached here ============\n");
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i += 1)
			len2++;
		if (n > len2)
			n = len2;
		pt = malloc(sizeof(*pt) * (len1 + n));
		if (pt == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0' ; i += 1)
			*(pt + i) = s1[i];
		for (i = 0; s2[i] != '\0'; i += 1)
		{
			*(pt + len1 + i) = s2[i];
			if (i == n)
				break;
		}
	}
	*(pt + len1 + n) = '\0';
	return (pt);
}
