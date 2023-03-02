#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 *@dest: char * input 1
  *@src: char * input 1
 * Return - char * 
 */
 
char *_strncat(char *dest, char *src, int n)
{
  int lensrc, i;
  
  lensrc = _strlen(src);
  printf("lenght of \"%s\": %d\n",src, lensrc);
  for (i = 0 ; i <= n || src[i] == '\0'; i++)
  {
    dest[lensrc + i] = src[i];
  }
  dest[lensrc + i] = '\0';
    return (dest);
}

/**
 * _strlen - check the code
 *@s: char * input pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
  int length;

  length = 0;
  while (s[length] != '\0')
  {
    length++;
  }
  return (length);
}


