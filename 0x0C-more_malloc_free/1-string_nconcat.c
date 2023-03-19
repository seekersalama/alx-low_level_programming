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
	unsigned int len1, len2, i;

	len1 = 0;
	len2 = 0;
	if (s2 == NULL || s2[0] == '\0')
	{
		s2 = malloc(1);
		s2[0] = '\0';
	}
	if (s1 == NULL || s1[0] == '\0')
	{
		s1 = malloc(1);
		s1 = "";
	}
	if ((s1 ==  NULL && s2 == NULL) || n == 0)
	{
		pt = malloc(1);
		pt = "";
		return (pt);
	}
	for (i = 0; s1[i] != '\0'; i += 1)
		len1++;
	for (i = 0; s2[i] != '\0'; i += 1)
		len2++;
	if (n >= len2)
		n = len2 + 1;
	pt = malloc(len1 + n + 1);
	if (pt == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0' ; i += 1)
		*(pt + i) = s1[i];
	for (i = 0; i <= n; i += 1)
		*(pt + len1 + i) = s2[i];
	*(pt + len1 + n) = '\0';
	return (pt);
}
