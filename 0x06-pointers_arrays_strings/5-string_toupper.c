/*
* Write a function that changes all lowercase letters of a string to uppercase.
*
* Prototype: char *string_toupper(char *);
*/

char *string_toupper(char * str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
