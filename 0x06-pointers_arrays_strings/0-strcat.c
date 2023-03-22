#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 *@dest: char * input 1
 *@src: char * input 1
 * Return - char *
 */

char *_strcat(char *dest, char *src)
{
	int lens, i;
	char *ret;
	ret = "";
	for (i = 0; dest[i] != '\0'; i += 1)
	{
		*(ret + i) =  dest[i];
	}
	lens = i;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		*(ret + lens + i) = src[i];
	}
	*(ret + i + lens) = '\0';
	return (dest);
}
