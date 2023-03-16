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
	unsigned int len1, len2, i, j;

	len1 = 1;
	len2 = 1;
	for (i = 0; s1[i] != '\0'; i += 1)
		len1++;
	if (s2 == NULL)
		s2 = "";
	else
		for (i = 0; s2[i] != '\0'; i += 1)
			len2++;
	if (n > len2)
		n = len2 + 1;
	pt = malloc(sizeof(*pt) * (len1 + n + 1));
	if (pt == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0' ; i += 1)
		*(pt + i) = s1[i];
	for (j = 0; s2[j] != '\0'; j += 1)
	{
		*(pt + len1 + j) = s2[j];
		if (j == n)
			break;
	}
	*(pt + len1 + j + 1) = '\0';
	return (pt);
}
